#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int count = 0;

	scanf("%d", &num);

	int digit[10] = { 0, };

	for (int i = 0; i < 1000000; i++) {

		int a, b, c;
		a = 10;
		b = 1;
		c = 100;
		
		for (int j = 0; j < 10; j++) {
			digit[j] = (i % a) / b;
			a *= 10;
			b *= 10;
		}

		for (int j = 0; j < 10; j++) {

			if (digit[j] == 6 &&
				digit[j + 1] == 6 &&
				digit[j + 2] == 6) {
				count++;

				if (count == num) {

					int k;

					for (k = 4; k >= 0; k--) {
						if (digit[k] == 0) continue;
						else break;
					}

					for (; k >= 0; k--) {
						printf("%d", digit[k]);
					}
					printf("\ncount : %d", count);
					break;
				}
			}
		}
	}
	return 0;
}