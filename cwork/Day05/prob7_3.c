#include <stdio.h>
int main_prob_7_3(void) {
	int i = 0;		//�ݺ����� ���� 0,2,4,6,8...100
	int sum = 0;

	do {
		sum += i;
		i += 2;
	} while (i <= 100);
	printf("��:%d\n", sum);	//������ ���� ���� �ùٸ��� Ǯ������ ����

	return 0;
}