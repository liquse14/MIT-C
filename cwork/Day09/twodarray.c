#include <stdio.h>

int main_twodarray(void) {
	int num;
	int one = 0;

	int arr[4];
	int oarr[5] = { 1,2,3 };	//oarr[0]=1,oarr[1]=2,oarr[2]=3,oarr[3]=0
	int oned[] = { 2 , 4 , 6 , 8 };	//�迭�� ũ�� : 4

	int arr2d[3][4];
	int arrtwo[5][3] = { {1,2,3},{2,4,6 },{10/* , 0 , 0 */},{5,10/*, 0*/}/*{0,0,0}*/ };

	int tadd[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//{{ 1 , 2 , 3 }, { 4 , 5 , 6 },{ 7 , 8 , 9}

	int www[][3] = { 1,2,3,4,5,6,7,8 };	//[3][3] ���� ������ ����������
//	int ttt[3][] = { 1,2,3,4,5,6,7,8 };
//	int sss[][] = { 2,4,6,8 };	//[1][4],[2][2],[4][1]

	printf("�޸� ũ�� = %d\n", sizeof(www));	//Ȯ�ι�� 1
	for (int i = 0; i < 4; i++) {	//Ȯ�ι�� 2
		for (int j = 0; j < 4; j++)
			printf("%d", www[i][j]);
		printf("\n");
	}
	return 0;
}