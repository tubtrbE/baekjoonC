#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int body[50][2] = { 0, };
	int people = 0;
	int count = 0;
	scanf("%d", &people);

	for (int i = 0; i < people; i++) {
		scanf("%d", &body[i][0]);
		scanf("%d", &body[i][1]);
	}

	for (int i = 0; i < people; i++) {
		count = 1;

		for (int j = 0; j < people; j++) {

			if (i == j) continue;
			else {

				if (body[i][0] < body[j][0] &&
					body[i][1] < body[j][1]) count++;
			}
		}
		if (i < people - 1) {
			printf("%d ", count);
		}
		else if (i == people - 1) {
			printf("%d", count);
		}
	}
	return 0;
}