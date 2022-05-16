#include <stdio.h>

int main () {
	
	int testcase, num;
	int prime[10001] = {0, };
	prime[1] = 1;
	
	for(int i = 2; i < 10001; i++) {
		for(int j = 2; i * j <= 10001; j++) {
			prime[i * j] = 1;
		} 					
	}	
	scanf("%d", &testcase);

	for(int i = 0; i < testcase; i++) {
		scanf("%d", &num);
		int result1 = -1, result2 = -1, tmp = 10000;;
			
		for(int j = num / 2; j > 2; j--) {
			
    		for(int k = num / 2; k < num; k++) {
    			
        		if(prime[j] == 0 && prime[k] == 0 && j + k == num) {
        			result1 = j;
        			result2 = k;
        		}
			}
			
			if(result1 != -1 && result2 != -1) break;
		}
		printf("%d %d\n", result1, result2);
	}
	return 0;
}
