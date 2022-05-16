#include <stdio.h>

int main (void) {

	int testcase[100] = {0, };

	for(int i = 0; i < 100; i++) {
    	scanf("%d", &testcase[i]); 
		if(testcase[i] == 0) break; 
 	}

	int testcase2[100] = {0, };
	int storeage[100][1000] = {0,};
	int count[100] = {0,};
	
	for(int i = 0; i < 100; i++) {
	
		storeage[i][0] = 1;
		storeage[i][1] = 1;		
	}
  
	for(int i = 0; i < 100; i ++) {
 
    	testcase2[i] = testcase[i]*2;

    	for(int j = 2; j < testcase2[i]; j++) {
	     	
			 for(int k = 2; k*j <= testcase2[i]; k++) {
    
       			storeage[i][j*k] = 1;
    	  	}
    	}

	
    	for(int j = 0; j <= testcase2[i]; j++) {
    		if(storeage[i][j] == 0) {
    			count[i]++;
    		} 
    	}
    	printf("%d\n", count[i]);
		//if(count[i])
	}
}
