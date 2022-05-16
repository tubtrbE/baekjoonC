#include<stdio.h>

int main (void) {
	
	int testcase = 0;
	int floor[100] = {0, };
	int room[100] = {0, };
	int customer[100] = {0, };
	int num = 0;
	int count = 0;
	int count2 = 1;
	scanf("%d", &testcase);
	
	for(int i = 0; i < testcase; i++) {
	
		scanf("%d", &floor[i]);
		scanf("%d", &room[i]);
		scanf("%d", &customer[i]);


		
		for(int j = 1; j <= customer[i]; j++) {
			
			count++;
			num = count*100 + count2*1;
			
			if(count == floor[i] ) {
				 count = 0;
				 count2++;
			}

			
		}
		
	printf("%d\n", num);
	if(count != 0) count = 0;
	if(count2 != 0) count2 = 1;
	}
}
