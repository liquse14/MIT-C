#include <stdio.h>
int main_prob_13_1_1(void) {
	int num = 10;	//����
	int* ptr = &num;	//������ ����
	printf("num = %d\n", num);	//���� num�� ����ؼ� ���
	printf("num = %d\n", *ptr);	//������ ������ ���ؼ� num�� ���
	//*ptr:�����ͺ��� ptr�� ����� �ּҰ� ����Ű�� ������ ����
	//ptr : �����ͺ����� �� = �ּҰ� ����ǰ� ���⼭�� ���� num�� �ּҰ� ��

	int arr[4] = { 5,10,15,20 };
	for (int i = 0; i < 4; i++) {
		printf("arr[%d]�� ��:%d,&arr[%d] = %p\n", i, arr[i], i, &arr[i]);
		//arr[i] : �迭 arr�� i��° ��
		//&arr[i] : �迭 arr�� i��° ���� �ּ�
	}
	//������ ������ ����ؼ� ����
	int* parr = arr;	//arr : �迭�� �ּ��̹Ƿ� &�� ���� �ʿ䰡 ����
	int* p2 = &arr[0];	//arr �� &arr[0]�� ���� ���� ������.
	for (int i = 0; i < 4; i++) {
		printf("*(parr + %d)�� ��:%d,parr + %d = %p\n", i, *(parr+i), i, parr+i);
	}
	//arr[i]:*(parr+i) ->���� ǥ��(���� ���� ����Ų��)
	//&arr[i] : parr +i ->���� ǥ��
	return 0;	
}