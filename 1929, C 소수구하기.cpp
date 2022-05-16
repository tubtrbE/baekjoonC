#include <stdio.h>

int main (void) {
		
	int min[123457];
	int max[123457];
	max = 2*min;
	
	int ary[1000001] = {0, };
	
	ary[0] = 1;
	ary[1] = 1;
	
	for(int i = 0)
	scanf("%d", &min[i]);
	
	
	for(int i = 2; i < max; i++) {
		for(int j = 2; i*j <= max; j++) {
			ary[i*j] = 1;
		}	
	}
	
	for(int i = min; i <= max; i++) {
		if(ary[i] == 0) 
		count++;
		
	}
	printf("%d")
}
