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

		for (int j = 0 ; j < 20 ; j++) { // ù��° �Է�(����)�� �����ϴ� ������ ������ �Ѵ�.  

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
		printf("%s\n" , AlphabetPrint);	// ���鵵 �ԷµǴ� ���� �߻�  
	} 
}

