#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {

	// Body 변수 선언
	typedef struct {

		int weight;
		int tall;

	} Body;

	int people;
	scanf("%d", &people);

	Body* body;
	body = (Body*)malloc(people * sizeof(Body));

	for (int i = 0; i < people; i++) {
		scanf("%d", &body[i].weight);
		scanf("%d", &body[i].tall);
	}

	for (int i = 0; i < people; i++) {
		int rank;
		rank = 1;
		for (int j = 0; j < people; j++) {
			if (i == j) continue;
			else if (body[i].weight < body[j].weight && body[i].tall < body[j].tall) {
				rank++;
			}

		}
		if (i < people - 1) printf("%d ", rank);
		else if (i == people - 1) printf("%d", rank);
	}

	return 0;
}