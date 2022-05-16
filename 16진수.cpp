#include <stdio.h>

int main (void) {

  unsigned short n, a;
  unsigned short mask;

  

  while(1) {
    
    printf("\n10진수를 입력하시요 : ");
    scanf("%d", &n);

    
    mask = 0x8000;
    
    for(int i = 0; i < 16; i++) { 
	    mask = mask >> 1;	    
		
		if(n & mask) {
			a = i;
		//	printf("a : %d",  a);
			for(int j = a+1; j < 16; j++) {
				
				if(j > a+1) {
					if(j % 4  == 0) printf(" ");
    			} 
				
				if(n & mask) printf("1");
				else printf("0");
				mask = mask >> 1;
			}
			
			break;
		}
 
    }
    if(n == 0) break;
  }
}
