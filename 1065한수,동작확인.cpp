#include <stdio.h>

int hansu (int n);

int main (void) {
	int n = 0;
	int han;
	scanf("%d" , &n);
	han = hansu(n);
	
}

int hansu (int n) {
	
	int thou = 0;
	int hun = 0;
	int ten = 0;
	int one = 0;
	int com1 = 0, com2 = 0 , com3 = 0;
	int count = 0;
	
	
	for(int i = 1 ; i <= n ; i++) {
		int a = 0 , b = 0;
		
		thou = i / 1000;
		hun = (i - thou*1000) / 100;
		ten = (i - thou*1000 - hun*100) / 10;
		one = i % 10;	
		
		com1 = ten - one;
		com2 = hun - ten;
		com3 = thou - hun;
		a = com1 - com2;
		b = com2 - com3;
			
		
		if (i < 100) {
			count++;
		} 
		
		else if(i >= 100 && i < 1000) {
			if (com1 == com2) count++;
		}
		
		else if(i >= 1000 & i < 10000) {
			if (a == b) count++;
		}
	}
	printf("%d" , count);
}

