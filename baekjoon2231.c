#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000000
#include <stdio.h>

int main(void) {

	int num;
	int de_sum[MAX] = {};
	int digit[7] = {};
	int a = 10, b = 1, sum = 0;
	int max = 0;
	int index = 0;

	scanf("%d", &num);

	for (int i = num / 2; i < num; i++) {

		sum = 0;
		a = 10;
		b = 1;

		for (int j = 0; j < 7; j++) {
			digit[j] = (i % a) / b;
			a *= 10;
			b *= 10;
			sum += digit[j];
		}

		if (sum + i == num) {
			de_sum[i] = sum;
		}

		for (int j = 0; j < 7; j++) {
			digit[j] = 0;
		}
	}

	for (int i = 0; i < num; i++) {
		
		if (de_sum[i] > max) {
			max = de_sum[i];
			index = i;
		}
	}

	if (index > 0) {
		printf("%d", index);
	}
	else if (index == 0){
		printf("0");
	}
	return 0;
}
