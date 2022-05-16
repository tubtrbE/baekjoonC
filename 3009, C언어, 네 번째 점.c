#include <stdio.h>

int main (void) {
	int dot[8] = {0,};
	int count[4] = {0,}; 
	int result1, result2;
	
	int i, j, k;
	
	for(i = 0; i < 3; i++) {
		scanf("%d %d", &dot[i * 2], &dot[(i * 2) + 1]);
	}
	
	for(i = 0; i < 3; i ++) {
	
		if(dot[2 * i] == dot[0])
			count[0]++;

		if(dot[2 * i] != dot[0]) {
			count[1]++;
			j = 2 * i;				
		}
						
		if(dot[(i * 2) + 1] == dot[1])
			count[2]++;	

		if(dot[(i * 2) + 1] != dot[1]) {
			count[3]++;	
			k = (i * 2) + 1;			
		}
	}

	for(i = 0; i < 4; i++) {
		
		if(count[0]%2 != 0) {
			result1 = dot[0];
		}
		if(count[1]%2 != 0) {
			result1 = dot[j];
		}
		if(count[2]%2 != 0) {
			result2 = dot[1];
		}
		if(count[3]%2 != 0) {
			result2 = dot[k];
		}
	}
	
	printf("%d %d", result1, result2);	
}
