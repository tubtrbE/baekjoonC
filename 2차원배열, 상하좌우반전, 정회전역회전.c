#include <stdio.h>

int main (void) {
	
	char korea[8][8] = {
	
	{'#','#','#','#','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#','#'},
	{' ',' ',' ',' ','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#',' '},
	{' ',' ',' ',' ','#',' ','#',' '}
	
	};
	
	
	int mode;
	scanf("%d", &mode);
	printf("mode : %d\n", mode);
	char temp = ' ';
	
	int i, j;

	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {	
		printf("%c", korea[i][j]);
		
			
		}
		printf("\n");
	}
	printf("\n");
	
	//좌우 반전 
	
	if(mode == 0) {
		
		for(i = 0; i < 8; i++) {
			for(j = 0;j < 4; j++) {
				
				if(korea[i][7 - j] == korea[i][j]) {
					continue;
				//	printf("korea[%d][%d] : %c\n", i, j,korea[i][j]);
				//	printf("korea[%d][%d] : %c\n", i, 7 - j,korea[i][7 - j]);

				}
				
				if(korea[i][7 - j] != korea[i][j]) {


					temp = korea[i][j];
					korea[i][j] = korea[i][7 - j];
					korea[i][7 - j] = temp;

				//	printf("temp : %c\n", temp);
				//	printf("korea[%d][%d] : %c\n", i, j,korea[i][j]);
				//	printf("korea[%d][%d] : %c\n", i, 7 - j,korea[i][7 - j]);

					temp = ' ';
					
				}
			}
		}

	for(i = 0; i < 8; i++) {
		
		for(j = 0; j < 8; j++) {	
			printf("%c", korea[i][j]);
		
			
		}
		printf("\n");
	}
	}

	//상하 반전 
	if(mode == 1) {
		
		for(i = 0; i < 8; i++) {
			for(j = 0; j < 4; j++) {
				
				if(korea[7 - j][i] == korea[j][i]) {
					continue;
				}
				
				else {
					temp = korea[j][i];
					korea[j][i] = korea[7 - j][i];
					korea[7 - j][i] = temp;
					temp = ' ';
				}
			}
		}
		
		for(i = 0; i < 8; i++) {

			for(j = 0; j < 8; j++) {	
				printf("%c", korea[i][j]);
		
			
			}
			printf("\n");
		}

	}
	
	//90도 역회전 
	if(mode == 3) {

		for(i = 0; i < 8; i++) {

			for(j = 0; j < 8; j++) {	
				printf("%c", korea[j][7 - i]);
			}
			printf("\n");
		}

	}

	//90도 정회전 
	if(mode == 2) {

		for(i = 0; i < 8; i++) {

			for(j = 0; j < 8; j++) {	
				printf("%c", korea[7 - j][i]);
			}
			printf("\n");
		}

	}






} 
