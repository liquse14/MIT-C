/*
���� 1. ���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ���
	�� 5���� ������ �Է� ����. �׸��� �Է��� ������ ������ ����
	�� ����ϵ��� ������ �ۼ��� ����.
	- �Էµ� ���� �߿��� �ִ밪
	- �Էµ� ���� �߿��� �ּҰ�
	- �Էµ� ������ ��
*/
#include <stdio.h>

int mainprob11_1_1(void) {
	int arr[5];	//int �� �迭 5�� ����
	int max;	//�ʱ�ġ X
	int min;	//�ʱ�ġ X
	int sum = 0;//�ʱ�ġ 0

	for (int i = 0; i < 5; i++){//������ 5�� �Է� arr[0] ~ arr[4]
		scanf("%d", &arr[i]);		//&num->&arr[i]
}

	//�����Ͱ��� � ������ �𸦶�
	//ó�� �� arr[0]
	max = min = sum = arr[0];	//�ʱⰪ
	//������ arr[1] ~arr[4]�� �ݺ������� ó��
	for (int i = 1; i < 5; i++) {
		//���ο� �ִ밪
		if (max < arr[i])
			max = arr[i];
		//���ο� �ּҰ�
		if (min > arr[i])
			min = arr[i];
		sum += arr[i];

	}

	printf("�ִ밪=%d,�ּҰ�=%d,��=%d\n", max, min, sum);
	return 0;
}