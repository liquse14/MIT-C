/*
const: ����� �������� ���ϰ� ������ ���� ��
*/
#include <stdio.h>


void callFunction(const int* ptr) {
//	*ptr = 10;
	int* bptr = ptr;
	*bptr = 50;
	int var2 = *ptr + 10;
}

void callFunction2(int* const ptr) {
	int one = 30;
//	ptr = &one;
}

	int mainconst_pointer(void) {
		int num = 10;	//���� 10���� ������ ���� ���� �ڿ��� �������� ���ϰ� �Ϸ���
		num = 20;

		const int var1 = 20;	//�ʱ�ȭ ���� �ڿ��� �������� ���ϰ� ��
	//	var1 = 30;	//������
		const int* ptr = &num;	//����(�����Ͱ� ����Ű�� ��)�� ���� �Ұ���
	//	*ptr = 30;
		int* const pnum = &num;
		//	pnum = &var1;

		callFunction(&num);
		callFunction2(&num);
	}