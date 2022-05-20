#include <stdio.h>

char dial(char *input, int output);

int main (void) {
	
	char input[15] = {0,};
	int output = 0;
	dial(input, output);
	
}

char dial(char *input, int output) {

	for(int i = 0; i < 15; i++) {
		scanf("%c", &input[i]);
		if(input[i] == 'A') {
			output += 3;
		}
		if(input[i] == 'B') {
			output += 3;
		}
		if(input[i] == 'C') {
			output += 3;
		}	
		if(input[i] == 'D') {
			output += 4;
		}	
		if(input[i] == 'E') {
			output += 4;
		}	
		if(input[i] == 'F') {
			output += 4;
		}	
		if(input[i] == 'G') {
			output += 5;
		}		
		if(input[i] == 'H') {
			output += 5;
		}	
		if(input[i] == 'I') {
			output += 5;
		}	
		if(input[i] == 'J') {
			output += 6;
		}	
		if(input[i] == 'K') {
			output += 6;
		}	
		if(input[i] == 'L') {
			output += 6;
		}	
		if(input[i] == 'M') {
			output += 7;
		}	
		if(input[i] == 'N') {
			output += 7;
		}	
		if(input[i] == 'O') {
			output += 7;
		}	
		if(input[i] == 'P') {
			output += 8;
		}	
		if(input[i] == 'Q') {
			output += 8;
		}	
		if(input[i] == 'R') {
			output += 8;
		}	
		if(input[i] == 'S') {
			output += 8;
		}	
		if(input[i] == 'T') {
			output += 9;
		}	
		if(input[i] == 'U') {
			output += 9;
		}	
		if(input[i] == 'V') {
			output += 9;
		}	
		if(input[i] == 'W') {
			output += 10;
		}	
		if(input[i] == 'X') {
			output += 10;
		}	
		if(input[i] == 'Y') {
			output += 10;
		}	
		if(input[i] == 'Z') {
			output += 10;
		}	
		if(input[i] == '\n') break;	
	}
	printf("%d", output);
}
