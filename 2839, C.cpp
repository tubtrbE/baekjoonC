#include <stdio.h>

int main (void) {
	
	int weight = 0;
	int num = 10;
	int num2 = 3;
	int count = 0;
	int rest = 0;
	int rest2 = 0;
	int division = 0;
	int division2 = 0;
		
	scanf("%d", &weight);
	
	rest = weight%num;
	rest2 = weight%num2;
	
	division = weight/num;
	division2 = weight/num2;
	
	if(weight < 10) {
		
		if(weight == 5) {
			printf("1");
			return 0;	
		}
		if(weight == 8) {
			printf("2");	
			return 0;
		}	
		if(rest2 == 0) {
			printf("%d", division2);
			return 0;
		}
		else printf("-1");
	}	
	
	if(weight >= 10) {
	
		if(rest == 0) {
			printf("%d", division*2);
			return 0;	
		}
		if(rest == 1) {
			weight = weight - 3;
			division = weight/num;
			printf("%d", division*2 + 3);
			return 0;	
		}
		if(rest == 2) {
			weight = weight - 12;
			division = weight/num;
			printf("%d", division*2 + 4);
			return 0;	
		}
		
		if(rest == 3) {
			printf("%d", division*2 + 1);	
			return 0;
		}
		if(rest == 4) {
			weight = weight - 6;
			division = weight/num;
			printf("%d", division*2 + 4);
			return 0;	
		}
		
		if(rest == 5) {
			printf("%d", division*2 + 1);	
			return 0;
		}
		if(rest == 6) {
			printf("%d", division*2 + 2);
			return 0;	
		}
		if(rest == 7) {
			weight = weight - 9;
			division = weight/num;
			printf("%d", division*2 + 5);
			return 0;	
		}		
		if(rest == 8) {
			printf("%d", division*2 + 2);	
			return 0;
		}
		if(rest == 9) {
			printf("%d", division*2 + 3);	
			return 0;
		}

		if(rest2 == 0) {
			printf("%d", division2);
			return 0;
		}
		else printf("-1");	

	}		
	
}
