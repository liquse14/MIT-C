#include	<stdio.h>

//int total = 0;		//���� ����->static������ ���

int AddToTal(int num)
{
	static int total = 0;	//static ���� ->ó���� ȣ��ɶ� �ѹ��� �ʱ�ȭ�� ��

	total += num;
	return total;
}

int mainprob921 (void)
{
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d\n", AddToTal(num));
	}
	return 0;
}
