/*
for �ݺ���
for(int i = 1;i <= 10;i++) {
	sum += i;
}
for(�ʱ��(O);���ǽ�(0);������(0)) {	// ���ǽ��� ���� ������ ������ �ν�
	���๮;				// ���๮�� �� ���� ��� '{' '}'�� ���� ����
}
������ Ƚ���� �ݺ� ������ ��
*/

#include	<stdio.h>

int main_for(void) {
	int i;
	int sum = 0;

	// �迭�� �ʱ� �ּҰ� 0���� ���� int i = 0;
	// 1~10
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("��=%d\n", sum);
	return 0;
}