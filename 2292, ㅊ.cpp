#include <stdio.h>

int main (void) {
	int input = 0;
	scanf("%d", &input);
	int num = 1;

	
	for(int i = 0; i < input; i++) {
		
		num = num + i*6;

		if(num >= input) {
			printf("%d", i+1);
			break;
		}	
	}
	return 0;
}
