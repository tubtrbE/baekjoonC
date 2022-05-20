#include <stdio.h>

int main(void) {
	

	
	char score1[100] = {0, };
	char score2[100] = {0, };
	int num1 = 0;
	int num2 = 0;
	char reverse1[100] = {0, };
	char reverse2[100] = {0, };
	int result1 = 0; 
	int result2 = 0;
	
	for(int i = 0; i < 100; i++) {
		scanf("%c", &score1[i]);
		
		if(score1[i] == ' ') {
			score1[i] = '\0';
			num1 = i;			
			break;
		}
	
	}

	for(int i = 0; i < num1; i++) {
		reverse1[i] = score1[num1-i-1] - 48;	

	}
	
	
	for(int i = 0; i < 100; i++) {
		scanf("%c", &score2[i]);
		
		if(score2[i] == '\n') {
			score2[i] = '\0';
			num2 = i;
			break;			
			
		}
	
	}

	
	for(int i = 0; i < num2; i++) {
		reverse2[i] = score2[num2-i-1] - 48;
		
	}

	
	result1 = reverse1[0]*100 + reverse1[1]*10 + reverse1[2]*1;
	result2 = reverse2[0]*100 + reverse2[1]*10 + reverse2[2]*1;
	
	if(result1 > result2) {
		printf("%d", result1);
	}
	else {
		printf("%d", result2);
	}
}

