#include <stdio.h>

int Location (int *AlphabetLocation , char *Alphabet , char *Word);

int main (void) {
	
	int AlphabetLocation[26];
	char Alphabet[26];
	char Word[100] = "";

	//Alphabet location
	for(int i = 0 ; i < 26 ; i++) {
		
		AlphabetLocation[i] = -1;	
		Alphabet[i] = i + 97;	
		
	}
	
	Location (AlphabetLocation , Alphabet , Word);
 
}

int Location (int *AlphabetLocation , char *Alphabet , char *Word) {
	
	//Word
	for(int i = 0 ; i < 100 ; i++) {
		scanf("%c" , &Word[i]);
		
		if (Word[i] == '\n') break;
		
		for(int j = 0 ; j < 26 ; j++) {
			
			if (Word[i] == Alphabet[j]) {
				
				if (AlphabetLocation[j] == -1) { 
				
				AlphabetLocation[j] = i;
				}
			}
		}
	}
	//printf
	for(int i = 0 ; i < 26 ; i++) {
		printf("%d " , AlphabetLocation[i]);		
	}
	
}




