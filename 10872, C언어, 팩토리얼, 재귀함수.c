#include <stdio.h>

int factory(int n, int f);

int main (void) {
	
	int num, fac;
	scanf("%d", &num); 
	if(num == 0) {
		printf("1");
		return 0;
	}
	
	fac = 1;
	factory(num, fac);
	printf("%d", factory(num, fac));
	
}

int factory(int n, int f) {
	
	f *= n; 
	n--;
	
	
	if(n == 0) return f;
	factory(n, f);	
	
}
