#include <stdio.h>
#include <string.h> //strlen �Լ� ����ؾߵ�  

int main (void) { 
	
	int Num = 0;          // '\n' Ű�� �����ÿ� TestScan for ���� �����߻�  
	scanf ("%d " , &Num); // %d �ڿ� ' ' �߰������ν� �ذ�  
	

	int Repeat[1000] = { 0, };             // �����Ȱ��� �ƴϸ�� �ʱ�ȭ�� �Ұ��� �ϴ�. 
	int length[1000] = { 0, };  
	char TestScan[1000][22] = { 0, };
	char TestPrint[1000][1000] = { 0, };   // ��Ȯ�ϰԴ� 20*8 + 1(�ι���) = 161 ���� �ܾ ���� �� �� �ֵ��� �Ѵ�.   
	
	//<�Էº�> 
	for (int i = 0 ; i < Num ; i++) {
		scanf ("%d" , &Repeat[i]);	
		fgets (TestScan[i] , sizeof(TestScan[i]) , stdin);	        // gets �Լ� �����ؼ� ������� �ʴ´� �ٸ� �Լ��� ��ü  
		      // strlen �Լ��� �̿��Ͽ� �迭�� ���̸� ã�´�.  
		if (TestScan[i][strlen(TestScan[i]) - 1] == '\n') {         // �� �κ��� for ���� ������ ����°ͺ��� strlen �Լ��� �̿��� ������ ǥ��  
           TestScan[i][strlen(TestScan[i]) - 1] = 0;                // �Ѹ���� '\n' �Է½� �ι��ڷ� ��ȯ���� ������ ���� ��ǻ�Ϳ��� �˷��ش�.  
        }
		length[i] = strlen(TestScan[i]) - 1; // �Ƹ� ���鵵 �����ϱ� ������ +1 �� �� ���������� ����ȴ�. 
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
            if (Count >= 1000) break;
		}
	
        if (Count != 0) 
            Count = 0;
	 			
	    printf ("%s\n" , TestPrint[i]);	
	}
}
