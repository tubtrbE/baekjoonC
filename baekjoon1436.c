#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int count = 0;
	int flag = 0;

	scanf("%d", &num);

	int digit[10] = { 0, };

	for (int i = 0; i < 10000000; i++) {
		flag = 0;
		int a, b;
		a = 10;
		b = 1;

		for (int j = 0; j < 10; j++) {
			digit[j] = (i % a) / b;
			a *= 10;
			b *= 10;
		}

		for (int j = 0; j < 10; j++) {

			if (digit[j] == 6 &&
				digit[j + 1] == 6 &&
				digit[j + 2] == 6) {
				flag++;
			}
		}
		if (flag >= 1) {
			int k;
			count++;

			for (k = 9; k >= 0; k--) {
				if (digit[k] == 0) continue;
				else break;
			}

			if (count == num) {
				for (; k >= 0; k--) {
					printf("%d", digit[k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}