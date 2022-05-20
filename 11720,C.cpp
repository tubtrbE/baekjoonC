#include<stdio.h>

int main (void) {
	
	int num = 0;
	scanf("%d" , &num);
	char score[num];
	
	int sum = 0;
	for(int i = 0 ; i < num ; i++) {
		
		scanf(" %c" , &score[i]);
		score[i] = score[i] - 48;
		sum += score[i]; 

	}
	printf("%d\n" , sum);	
}
