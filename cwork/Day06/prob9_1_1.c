/*
���� 1
�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ�
�Լ��� �����غ���. �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.

#include <stdio.h>
int getmaximumnumber(int num1, int num2, int num3) {
	if (num1 > num2) {
		if (num1 > num3) {
			return num1;
		}
		else {
			return num3;
		}
	}
	else {
		if (num2 > num3)
			return num2;
		else {
			return num3;
		}
	}
}

int getMinimumNumber(int num1, int num2, int num3) {
	int min = num1;
	if (min > num2);
	    min = num2;
		if (min > num3)
			min = num3;
		return num2;
	else {
		return num3;
	}
}

int main151651651651651325165435215654321(void) {
	int n1, n2, n3;
	printf("�� ���� �Է�:");
	scanf("%d%d%d", &n1, &n2, &n3);
	int max = getmaximumnumber(n1, n2, n3);
	int min = getMinimumNumber(n1, n2, n3);
	printf("�ִ밪=%d\t�ּҰ�=%d\n", max, min);
	return 0;
}
*/
