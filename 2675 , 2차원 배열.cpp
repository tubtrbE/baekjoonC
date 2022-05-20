#include <stdio.h>
#include <string.h> //strlen 함수 사용해야됨  

int main (void) { 
	
	int Num = 0;          // '\n' 키를 누를시에 TestScan for 동작 문제발생  
	scanf ("%d " , &Num); // %d 뒤에 ' ' 추가함으로써 해결  
	

	int Repeat[8];
	int length[1000] = {0}; 
	char TestScan[1000][20] = {0};
	char TestPrint[1000][161] = {0};   // 여러번 반복한 문자가 들어가야 되기 때문에 160정도로 잡아둔다. 
	

	//<입력부> 
	for (int i = 0 ; i < Num ; i++) {
		scanf ("%d" , &Repeat[i]);
		
		
		fgets (TestScan[i] , sizeof(TestScan[i]) , stdin);	        // gets 함수 위험해서 사용하지 않는다 다른 함수로 대체  
		      // strlen 함수를 이용하여 배열의 길이를 찾는다.  
		if TestScan[i]
		length[i] = strlen(TestScan[i]) - 2; // 아마 공백도 포함하기 떄문에 +1 이 더 붙을것으로 예상된다. 
	
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
			
		}
	
	if (Count != 0) 
		Count = 0;
	 			
	printf ("%s\n" , TestPrint[i]);	
	}
}
