#include <stdio.h>
#include <string.h> //strlen 함수 사용해야됨  

int main (void) { 
	
	int Num = 0;          // '\n' 키를 누를시에 TestScan for 동작 문제발생  
	scanf ("%d " , &Num); // %d 뒤에 ' ' 추가함으로써 해결  
	

	int Repeat[1000] = { 0, };             // 고정된값이 아니며는 초기화가 불가능 하다. 
	int length[1000] = { 0, };  
	char TestScan[1000][22] = { 0, };
	char TestPrint[1000][1000] = { 0, };   // 정확하게는 20*8 + 1(널문자) = 161 개의 단어를 적용 할 수 있도록 한다.   
	
	//<입력부> 
	for (int i = 0 ; i < Num ; i++) {
		scanf ("%d" , &Repeat[i]);	
		fgets (TestScan[i] , sizeof(TestScan[i]) , stdin);	        // gets 함수 위험해서 사용하지 않는다 다른 함수로 대체  
		      // strlen 함수를 이용하여 배열의 길이를 찾는다.  
		if (TestScan[i][strlen(TestScan[i]) - 1] == '\n') {         // 열 부분을 for 문을 돌려서 만드는것보다 strlen 함수를 이용한 식으로 표현  
           TestScan[i][strlen(TestScan[i]) - 1] = 0;                // 한마디로 '\n' 입력시 널문자로 변환시켜 문장의 끝을 컴퓨터에게 알려준다.  
        }
		length[i] = strlen(TestScan[i]) - 1; // 아마 공백도 포함하기 떄문에 +1 이 더 붙을것으로 예상된다. 
	}
	
	//<출력부> 
	int Count = 0;
	int x = 0;
	int Sum = 0;
	
	for (int i = 0 ; i < Num ; i++) {  //행의 위치를 표현해주는 for
		for (int j = 1 ; j <= length[i] ; j++) { // 입력한 문자열의 길이만큼  자동으로 넣어주기 위한 for  
			for(x = 1 ; x <= Repeat[i] ; x++) {
				TestPrint[i][Count] = TestScan[i][j];
				Count++;
		
            }
            if (Count >= 1000) break;
		}
	
        if (Count != 0) 
            Count = 0;
	 			
	    printf ("%s\n" , TestPrint[i]);	
	}
}
