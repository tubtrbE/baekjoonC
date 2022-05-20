#include <stdio.h>

int d(int n);

int main (void) {
	int n = 1;
	int selfNum;
	
	selfNum = d(n); // 호출을 해주지 않으면 동작 자체를 하지 않는다.  
	
}

int d(int n) {
	
	int Self[10000];

	int thou = 0;
	int hun = 0;
	int ten = 0;
	int one = 0;
	
	for (int i = 0 ; i < 10000 ; i++){
		Self[i] = 0;	
	}
	
	while(n < 10000) {
		
		
		n = n + thou + hun + ten + one;
		thou = n / 1000;
		hun = (n - thou*1000) / 100;
		ten = (n - thou*1000 - hun*100) / 10;
		one = n % 10;
		
		Self[n] = n;
		if(Self[n] != 0) {
		printf("%d\n" , Self[n]);
		}
		
			
		if (n >= 10000) break;
	}
	for (int i = 0 ; i < 10000 ; i++){
		
	}						
}

