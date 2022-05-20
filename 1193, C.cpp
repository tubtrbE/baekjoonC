#include <stdio.h>

int find(int num);

int main (void) {

	int num = 0;
	scanf("%d", &num);
	find(num);
	
}

int find(int num) {


	int left = 1;
	int right = 1;
	int sum = 0;
	int a = 0;
	sum = 1;
	
	 
	
	for(int i = 0; i < num; i++) {
		sum += i;


		if(sum >= num) {
			if(sum > num) {
				i = i-1;	
				sum = sum - i - 1;
			} 			
			a = i%2;
	
			if(a == 0) { //礎熱(i陛 礎熱) 
				left = (i + 1) - (num - sum);
				right = 1 + (num - sum);
				printf("%d/%d", left, right);		

			}
			if(a == 1) {  //�汝�(i陛 礎熱) 
				right = (i + 1) - (num - sum);
				left = 1 + (num - sum);
				printf("%d/%d", left, right);		
			}
			break;
		}	
		
		
	}
}
