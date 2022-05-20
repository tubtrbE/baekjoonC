#include <stdio.h>

int main (void) {
	
	int num = 0;
	int fixed = 0;
	int variable = 0;
	int sell = 0;

	int cost = 0;
	int sales = 0;
	
	scanf("%d", &fixed);
	scanf("%d", &variable);
	scanf("%d", &sell);

	if(variable >= sell) {
		printf("-1");
		return 0;
	}
	
	sales = sell - variable;
	num = fixed/sales;
	printf("%d", num + 1);	
		
}
