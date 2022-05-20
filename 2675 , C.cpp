#include<stdio.h>

int main (void) {
	
	int Num = 0 ;
	scanf("%d " , &Num);
	
	int Repeat[8];
	char AlphabetScan[20] = "";
	char AlphabetPrint[160] = "";

	int count = 0;
	
	for (int i = 0 ; i < Num ; i++) {
		scanf("%d " , &Repeat[i]);

		for (int j = 0 ; j < 20 ; j++) { // 첫번째 입력(공백)을 무시하는 구문을 만들어야 한다.  

			scanf("%c" , &AlphabetScan[j]); 
						
			if(AlphabetScan[j] == '\n') {
			
				count = 0;
				break;
			}
			
			for (int k = 0 ; k < Repeat[i] ; k++) {
				
				AlphabetPrint[count] = AlphabetScan[j];				
				count++;
			}
		}
		printf("%s\n" , AlphabetPrint);	// 공백도 입력되는 문제 발생  
	} 
}

