/*
		* �����̽� ��: 4��	i=0 5-1-i
	   0*			   3��	i=1
	  00*			   2	i=2
	 000*              1	i=3
    0000*			   0	i=4
*/

#include <stdio.h>
int main2342342433(void) {
	int i,j;
	for (i = 0; i < 5; i++) {
		//�����̽� ��� : 5-1-i�� ->�ݺ���
		for (j = 0; j < 5 - 1 - i; j++) {
			printf("  ");
		}
		//0�� ���		:i��	  ->�ݺ���
		for (j = 0; j < i; j++) {
			printf("0 ");
		}
		// * ���
		printf("*\n");
	}
	return 0;
}