#include<stdio.h>

int main (void) {
	
	int climb = 0;
	int fall = 0;
	int height = 0;

	int climb2 = 0;
	int gap = 0;
	int rest = 0;

	int test2 = 0;
	int num = 0;
	
	scanf("%d", &climb);
	scanf("%d", &fall);
	scanf("%d", &height);

	if(fall == climb - 1) { // ���� - fall 
		printf("%d", height - fall);
		return 0;	
	}
	
	gap = climb - fall;  //���� ���� ���� 
	rest = height%gap;	// �������� �����༭ ������ ���� �� �ֵ���  

	for(int i = 0; i < climb; i++) {
		test2 = gap*i + rest;

		if(test2 == climb) {
			break;
		}		
		
		if(test2 > climb) {
			test2 = gap*(i-1) + rest;
			break;
		}		
	}
	
	num = (height - test2)/gap;
	printf("%d", num + 1);

}
