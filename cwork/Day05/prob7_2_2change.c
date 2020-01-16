/*
		* 스페이스 수: 4번	i=0 5-1-i
	   0*			   3번	i=1
	  00*			   2	i=2
	 000*              1	i=3
    0000*			   0	i=4
*/

#include <stdio.h>
int main2342342433(void) {
	int i,j;
	for (i = 0; i < 5; i++) {
		//스페이스 출력 : 5-1-i번 ->반복문
		for (j = 0; j < 5 - 1 - i; j++) {
			printf("  ");
		}
		//0을 출력		:i번	  ->반복문
		for (j = 0; j < i; j++) {
			printf("0 ");
		}
		// * 출력
		printf("*\n");
	}
	return 0;
}