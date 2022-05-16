#include <stdio.h>


//에라토스 테네스 의 체 
int main (void) {
	
	int num = 0;
	int num2 = 0;
	scanf("%d", &num);
	scanf("%d", &num2);
	int sum = 0;

	int score[10001] = {0,};
	int nprime[10001] = {1,1,0 };
	int n = 0;
	
	
	for(int i = 0; i < 10001; i++) {
		score[i] = i;
	//	printf("score[i] : %d\n", score[i]);
		
		for(int j = 2; j < i-1; j++) {

			
			n = score[i]%j;
		    if(n == 0) {
		    	nprime[i] = score[i];
		    	break;
			}
			
		}
		printf("nprime[i] : %d\n", nprime[i]);
	}
	
	for(int i = num; (i >= num) && (i <= num2); i++) { 

		if(nprime[i] == 0) {
			sum += i;	
		}	
	}	
	if(sum == 0) printf("-1");
	if(sum != 0) {
		printf("%d\n", sum);	
	}
	for(int i = num; (i >= num) && (i <= num2); i++) { 
		if(nprime[i] == 0) {
			printf("%d", i);
			break;	
		}	
	}

	return 0;
}
