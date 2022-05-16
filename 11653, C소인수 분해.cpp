#include <stdio.h>

int main (void) {

	int n ;
	scanf("%d", &n);
	int rest = 0; 
	int count = 1;
	int count2 = 0;

	while(1) {
		
		count++;
		rest = n%count;
		if(rest == 0) {
			printf("%d\n", count);

			count2++;
			n /= count;
			count = 1;				
		}
		if(count > n) break;
	}
	 
}

