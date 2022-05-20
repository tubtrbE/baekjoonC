#include<stdio.h>
#include<string.h>

char Result(char *word, int length);

int main (void) {
	char word[1000000] = {0};
	int count = 0;
	
	
	for(int i = 0; i < 1000000; i++) {
		scanf("%c", &word[i]);
		if(word[i] == '\n') {    // \n 입력시 \0 으로 변환시켜줘서 끝을 알린다.  
			word[i] = '\0'; 
			break;
		}
	}
	
	int length = strlen(word); 
	Result(word, length);
	return 0;
}

char Result(char *word, int length) {
	int count = 0;
		
	if(word[0] == ' ') {     // 예제2, 4
		if(word[length-1] == ' ') count = -1; 
		
		for(int j = 0; j < length; j++) {
			if(word[j] == ' ') {
				if(word[j+1] != ' ') count++; 	
			}
		}
		printf("%d", count);
	}
	else {                  //예제1, 3 
		if(word[length-1] != ' ') count = +1; 
		
		for(int i = 0; i < length; i++) {
			if(word[i] == ' ') {
				if(word[i-1] != ' ') count++; 
			}
		}
		printf("%d", count);
	}
}


