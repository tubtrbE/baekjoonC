#include <stdio.h>
#include <string.h> //strlen �Լ� ����ؾߵ�  

int main (void) { 
	
	int Num = 0;          // '\n' Ű�� �����ÿ� TestScan for ���� �����߻�  
	scanf ("%d " , &Num); // %d �ڿ� ' ' �߰������ν� �ذ�  
	

	int Repeat[8];
	int length[1000] = {0}; 
	char TestScan[1000][20] = {0};
	char TestPrint[1000][161] = {0};   // ������ �ݺ��� ���ڰ� ���� �Ǳ� ������ 160������ ��Ƶд�. 
	

	//<�Էº�> 
	for (int i = 0 ; i < Num ; i++) {
		scanf ("%d" , &Repeat[i]);
		
		
		fgets (TestScan[i] , sizeof(TestScan[i]) , stdin);	        // gets �Լ� �����ؼ� ������� �ʴ´� �ٸ� �Լ��� ��ü  
		      // strlen �Լ��� �̿��Ͽ� �迭�� ���̸� ã�´�.  
		if TestScan[i]
		length[i] = strlen(TestScan[i]) - 2; // �Ƹ� ���鵵 �����ϱ� ������ +1 �� �� ���������� ����ȴ�. 
	
	}
	
	//<��º�> 
	int Count = 0;
	int x = 0;
	int Sum = 0;
	
	for (int i = 0 ; i < Num ; i++) {  //���� ��ġ�� ǥ�����ִ� for
		
		for (int j = 1 ; j <= length[i] ; j++) { // �Է��� ���ڿ��� ���̸�ŭ  �ڵ����� �־��ֱ� ���� for  
			
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
