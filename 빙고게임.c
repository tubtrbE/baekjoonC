#include <stdio.h>

int main (void) {
	
	char board[3][3] = {0, };
	int count;

	int x, y;
	int i, j;
	
	for(i = 0; i < 9; i++) {
		
		printf("i : %d\n", i); 
	
		printf("��ǥ�� ���ּ��� : ");
		scanf("%d", &x, &y);
		
		if(board[x][y] != '0') {
			
			printf("�̹� �Էµ� ĭ �Դϴ�.");
			i--;
		}
		
		if(2 % i == 0) board[x][y] = 'O';
		if(2 % i == 1) board[x][y] = 'X';
	}

	for(j = 0; j < 3; j++) {
	
		if(board[j][0] == board[j][1] == board[j][2] && board[j][0] > 0)
			printf("%c�� �¸��Ͽ����ϴ�!!\n", board[j][0]);
	}


	
    for (i = 0; i < 3; i++) {
   	    printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
    }
    printf("---|---|---\n");
	
}
