#include <stdio.h>

int main (void) {
	
	while(1) {
		
		int side[3] = {0}, max, temp = 0;
		scanf("%d %d %d", &side[0], &side[1], &side[2]);
		if(side[0] == 0 && side[1] == 0 && side[2] == 0) break;
		
		int i, j, index;
		
		
		i = 0;
		for(i = 0; i < 3; i++) {
		
			if(max < side[i]) {
				max = side[i];
				index = i;
				
			}	
		}
		
		temp = side[2];
		side[2] = max;
		side[index] = temp; 

		for(i = 0; i < 3; i++) {
			side[i] = side[i] * side[i];
		}

		if(side[2] == side[0] + side[1]) printf("right\n");
		else printf("wrong\n");

		index = 0;
		max = 0;		
		
	}
} 
