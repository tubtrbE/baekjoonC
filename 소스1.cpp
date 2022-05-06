#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* id_list[], int id_list_len, const char* report[], int report_len, int k) {

    int* answer = (int*)malloc(id_list_len * sizeof(int));
    for (int i = 0; i < id_list_len; i++) {
        answer[i] = 0;
    }
    int count[1000] = {};
    int count_success[1000] = {};

    char copy_report2[200000][21] = {};
    for (int i = 0; i < report_len; i++) {
        strcpy(copy_report2[i], report[i]);
    }

    char copy_report[200000][21] = {};
    for (int i = 0; i < report_len; i++) {
        strcpy(copy_report[i], report[i]);
    }

    //리포트 의 중첩부분을 제거하는 루프
    for (int i = 0; i < report_len; i++) {
        for (int j = 0; j < report_len; j++) {

            if (i == j) continue;
            else if (strcmp(report[i], report[j]) == 0) {
                strcpy(copy_report[j], "");
            }
        }
    }

    // 피고인의 문자열만을 남겨주는 루프
    for (int i = 0; i < report_len; i++) {
        char* p, * s;
        for (p = copy_report[i]; s = strtok(p, " "); p = NULL) {
            strcpy(copy_report[i], s);
        }
    }

    // 각 id 유저가 신고당한 횟수
    for (int i = 0; i < id_list_len; i++) {

        for (int j = 0; j < report_len; j++) {

            if (strcmp(id_list[i], copy_report[j]) == 0) {
                count[i]++;
            }
        }
        answer[i] = count[i];
    }

    // 신고 및 검거를 시도한 유저
    for (int i = 0; i < report_len; i++) {
        char* p, * s;
        p = copy_report2[i];
        s = strtok(p, " ");
        strcpy(copy_report2[i], s);
    }

    // 신고 및 검거를 성공한 메일을 받은 횟수 
    for (int i = 0; i < report_len; i++) {
        int num = 0;

        // 신고자를 찾는 for 문
        for (int j = 0; j < id_list_len; j++) {
            if (strcmp(copy_report2[i], id_list[j]) == 0) {
                num = j;
            }
        }

        //용의자 검거에 성공할시에 횟수 추가
        for (int j = 0; j < id_list_len; j++) {

            if (strcmp(copy_report[i], id_list[j]) == 0 &&
                count[j] >= k) {
                count_success[num]++;
            }
        }
    }

    for (int i = 0; i < id_list_len; i++) {
        answer[i] = count_success[i];
    }

    return answer;
}