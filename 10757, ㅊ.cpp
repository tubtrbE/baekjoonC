#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char sum(char *num1, char *num2, int length);

int main (void) {
	
	char num1[10000] = {0, };
	char num2[10000] = {0, };
	char storeage1[10000] = {0, };
	char storeage2[10000] = {0, };
	
	int length = 0;
	int length1 = 0;
	int length2 = 0;

	for(int i = 0; i < 10000; i++) {
	
		scanf("%c", &num1[i]);
		length1 = i;	
			
		if(num1[i] == ' ') {
			num1[i] = '\0';
			break;
		}
//		printf("%c", num1[i]);
	}

	for(int i = 0; i < length1; i++) {
		storeage1[i] = num1[length1 - i - 1];
		if(storeage1[i] == '\0')break;
	}

	for(int i = 0; i < 10000; i++) {
		
		scanf("%c", &num2[i]);
		length2 = i;

		if(num2[i] == '\n') {
			num2[i] = '\0';
			break;	
		}
//		printf("%c", num2[i]);
	}

	for(int i = 0; i < length2; i++) {
		storeage2[i] = num2[length2 - i - 1];
		if(storeage2[i] == '\0')break;
	}

	if(length1 >= length2) {
		length  = length1;
	}
	
	if(length2 >= length1) {
		length  = length2;
	}
	
//	printf("length : %d\n", length);
	sum(storeage1, storeage2, length);
	
	return 0;
}
 
char sum(char *num1, char *num2, int length) {
	
	char num[10000] = {0, };
	int count = 0;
	
	for(int i = 0; i < length+1; i++) {
		
		if(num1[i] > 0) num1[i] = num1[i] -  48;
		if(num2[i] > 0) num2[i] = num2[i] -  48;

		num[i] = num1[i] + num2[i] + count;
		
		if(count != 0) count = 0;
		if(num[i] > 10) {
			num[i] = num[i] - 10;
			count++;
		}
		if(num[i] == 10) {
			num[i] = 0;
			count++;
		}
		num[i] = num[i] + 48;
//		printf("%d\n", i);			
	} 
	
	if(num[length] == 48) length--;
	
	for(int i = 0; i < length+1; i ++) {
		
		printf("%c", num[length-i]);	
	}	
	
	return 0;
}
