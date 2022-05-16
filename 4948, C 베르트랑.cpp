#include <stdio.h>

int main (void) {

  while (1) {
    int num, num2;
    scanf("%d", &num);
    num2 = num*2;
    int testcase[1234567] = {0, };
    testcase[0] = 1;
    testcase[1] = 1;
    int count = 0;
    
    for(int i = 2; i < 1234567; i++) {
      for(int j = 2; i*j <= 1234567; j++) {
        testcase[i*j] = 1;
      }
    }

    for(int i = num+1; i <= num2; i++) {
      if(testcase[i] == 0) count++;
    }  
    printf("count : %d\n", count);
    printf("num : %d\n", num);
    printf("num2 : %d\n", num2);

    if(num == 0) break;
  }
 return 0; 
}
