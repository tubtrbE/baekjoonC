#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	
	int num = 0, temp = 0, cal = 0;
//	num = 0x87600321;
//	num = 0x7e6a0cab;
	num = 0x66b829ba;
//	num = 0x72b59de5;
	srand((unsigned)time(0));


/*
	for(int i = 0; i < 8; i++) {
		temp = rand()%15;
		cal = temp << (28 - 4*i);
		num += cal; 
//		printf("temp : %x\n", temp);
		
	}
*/
	printf("num : %x\n", num);


	cal = 0; // 최소값 계산 
	int cal2 = 0; // 임시저장값 계산 
	int cal3 = 0;
	int cal4 = 0;
	int cal5 = 0;
	int index = 0; // 비트의 자리수는 index 의 역할을 한다. 
	int gap;
	
	int min = 16; // 최소값 저장 
	temp = 16; // 임시저장값 저장 

	int mask4 = 0xf0000000;
	int mask3 = 0xf0000000;
	int maskdex;
	int mask2 = 0xf0000000;
	int mask1 = 0xff000000;
	int maskend1 = 1;
	int maskend2 = 0;
	int mask = mask1 ^ mask2; 
	
	//	min 값을 찾는 for 문	
	for(int i = 0; i < 7; i++) {
		
		maskend1 = 1;
		mask = mask1 ^ mask2;

		for(int j = i; j < 8; j++) {
		
			cal = (num >> 28 - (4 * j)) & 0xf;
			//printf("%x\n", cal);	
			if(min > cal) {
				min = cal;
				index = j;
				printf("min : %x\n", min);
			}
		}
		if(index == 0) continue;
		
		if(index > 0) {
			
			maskdex = mask3 >> (index)*4; 
			gap = index - i;
	
			// cal2 (i == 0)에서 f 가 지워지지 않는 문제 발생			
			if(i == 0) {
				cal2 = num & 0xf0000000;	
//				printf("cal2 : %x\n", cal2);				
		
			}
			
			
			if(i > 0) {
				
				cal2 = num & mask;	
				mask1 = mask1 >> 4;
				mask2 = mask2 >> 4;			
			}
			 
			if(min == 0) {
				
				min = 1;
				temp = i;
//				printf("temp : %x\n", temp);
				maskend1 = maskend1 << 28 - (4 * i);
				maskend2 = maskend2 + maskend1; 										
			}
			
			min = min << 28 - (4 * i);
			num = num + (min - cal2);
			cal2 = cal2 >> (7-i)*4;
//			printf("cal2 : %x\n", cal2);

			mask4 = mask4 >> (6-i)*4;
			
			
			if((num & 80000000) && (i == 0)) { 								
				cal2 = cal2 ^ mask4;
			} 
	
			
			printf("cal2 : %x\n", cal2);				
			cal2 = cal2 << (7-index)*4; // cal2에서 f가 같이 나온다. 
			printf("cal2 : %x\n", cal2);			
			cal3 = num & maskdex;
			maskdex = maskdex << 4;
			cal4 = num & maskdex;
			cal4 = num - cal4;
			cal3 = num - cal3;	//cal3 에서 f 가 같이 나오는 현상이 발생한다. 
//			cal3 = cal2 + cal3;
			num = num - cal4;
//			num = num + cal3;
		
			printf("i : %d\n", i);	
//			printf("index : %d\n", index);
//			printf("gap : %d\n", gap);
			printf("min : %x\n", min);
//			printf("mask4 : %x\n", mask4);
//			printf("cal2 : %x\n", cal2);
//			printf("maskdex : %x\n", maskdex);
			printf("cal3 : %x\n", cal3);
//			printf("cal4 : %x\n", cal4);
//			printf("cal5 : %x\n", cal5);
//			printf("num : %x\n", num);
//			printf("maskend1 : %x\n", maskend1);
//			printf("maskend2 : %x\n", maskend2);	
//			printf("num(정렬) : %x\n", num ^ maskend2);
			
		}
	}
}
