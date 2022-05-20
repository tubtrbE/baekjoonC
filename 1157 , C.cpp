#include <stdio.h>
#include <string.h>

char Result(int *testEa, char *result);   // 갯수의 배열을 받아야한다.

int main (void) {
	
	char word[1000000] = "";

	int testEa[26] = {0};
	char result[26] = {0};
	
	for(int i = 0; i < 1000000; i++) {
		
		scanf("%c" , &word[i]);
		if(word[i] == '\n') break;
	}
	
	int length;
	length = strlen(word) - 1; //strlen 에는 '\0' 문자도 포함된다. 

	
	for(int i = 0; i < 26; i++) {
		
		int alpha = 0;     //소문자 
		int Alpha = 0;     //대문자 
		int count = 0;			
		
		
		alpha = 97 + i; 
		Alpha = 65 + i;
		
		result[i] = Alpha;
		
		for(int j = 0; j < length; j++) {
		
			if(word[j] == alpha) {
				count++;
			}
			if(word[j]== Alpha) {
				count++;
			}	
		}
		
		testEa[i] = count;

		if(count != 0) count = 0; 

	}
	Result(testEa, result);
}

char Result(int *testEa, char *result) {
	int max1 = 0;
	int max2 = 0;
	int j = 25;
	int locate1 = 0;
	int locate2 = 0;  
	
	for(int i = 0; i < 26; i++) {

		if(testEa[i] > max1) {
			locate1 = i;
			max1 = testEa[i];
		}
		if(testEa[j] > max2) {
			locate2 = j;
			max2 = testEa[j];
		}

		j--;				
	}

	if(locate1 == locate2) printf("%c", result[locate1]);
	if(locate1 != locate2) printf("?"); 
}
