#include	<stdio.h>
int main_prob13_1_1(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;	//&arr[0]
	//������ ���� ptr�� ����� ���� ������Ű�� ������ ���� ->ptr++
	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;	//�� �ڽ��� �����ϸ鼭
		// (*ptr++) += 2; ���� ǥ��
	}

	for (int i = 0; i < 5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}