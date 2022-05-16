#include <stdio.h>

int fibo(int num, int front , int back);

int main (void) {
	
	int num, front, back;
	scanf("%d", &num);
	if(num == 0) {
		printf("0")	;
		return 0;
	} 

	front = 1;
	back = 0;

	fibo(num, front, back);
	printf("%d", fibo(num, front, back));
}

int fibo(int num, int front, int back) {
	num--;

	int sum;
	sum = back + front;
	back = front;	
		
	if(num == 0) {
		return front;
	}
	fibo(num, sum, back);
} 
