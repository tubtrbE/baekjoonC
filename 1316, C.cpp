#include<stdio.h>
#include<string.h>

int main (void) {
	
	char word[100][100] = {0, };
	int num = 0;
	scanf("%d", &num);
	char check[100][100] = {0, }; 
	int result = 0;
	  
	for(int i = 0; i < num; i++) {
		
		
		int count = 0;
		int length = 0;
 		int length2 = 0; 
		scanf("%s", &word[i]);
		length = strlen(word[i]);
	
		for(int j = 0; j < length; j++) {
			
			if(word[i][j] != word[i][j+1]) {
				check[i][strlen(check[i])] = word[i][j];
			}		
		
		}
	
		length2 = strlen(check[i]);	
		for(int j = 0; j < length2; j++) {

			
			
			for(int k = 0; k < length2; k++) {
				
				if(check[i][j] == check[i][k]) {
					count++;		

				}	
				
			}
			
		}
		
		if(length2 == count) {
			result++;
		}

		if(count != 0) count = 0;
					
	}
	printf("%d", result);
}


