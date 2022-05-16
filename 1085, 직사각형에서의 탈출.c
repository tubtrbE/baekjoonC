#include <stdio.h>
#define max 1000

int main (void) {
	
	int x, y, w, h;
	int width, length;
	int i, min = max; 
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	width = w - x;
	length = h - y;

	int score[4] = {x, y, width, length};
	
	for(i = 0; i < 4; i++) {
		if(score[i] < min) 
			min = score[i];	
	}
	printf("%d", min);
		
}
