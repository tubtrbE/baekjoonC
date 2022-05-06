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

    //����Ʈ �� ��ø�κ��� �����ϴ� ����
    for (int i = 0; i < report_len; i++) {
        for (int j = 0; j < report_len; j++) {

            if (i == j) continue;
            else if (strcmp(report[i], report[j]) == 0) {
                strcpy(copy_report[j], "");
            }
        }
    }

    // �ǰ����� ���ڿ����� �����ִ� ����
    for (int i = 0; i < report_len; i++) {
        char* p, * s;
        for (p = copy_report[i]; s = strtok(p, " "); p = NULL) {
            strcpy(copy_report[i], s);
        }
    }

    // �� id ������ �Ű���� Ƚ��
    for (int i = 0; i < id_list_len; i++) {

        for (int j = 0; j < report_len; j++) {

            if (strcmp(id_list[i], copy_report[j]) == 0) {
                count[i]++;
            }
        }
        answer[i] = count[i];
    }

    // �Ű� �� �˰Ÿ� �õ��� ����
    for (int i = 0; i < report_len; i++) {
        char* p, * s;
        p = copy_report2[i];
        s = strtok(p, " ");
        strcpy(copy_report2[i], s);
    }

    // �Ű� �� �˰Ÿ� ������ ������ ���� Ƚ�� 
    for (int i = 0; i < report_len; i++) {
        int num = 0;

        // �Ű��ڸ� ã�� for ��
        for (int j = 0; j < id_list_len; j++) {
            if (strcmp(copy_report2[i], id_list[j]) == 0) {
                num = j;
            }
        }

        //������ �˰ſ� �����ҽÿ� Ƚ�� �߰�
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