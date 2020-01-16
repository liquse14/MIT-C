#include <stdio.h>

//arr[i]:*(ptr+i) ȣȯ ����
void printArray(int num[][4]) {		//int** num, int num[][4]
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", num[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void rotateArray(int num[][4]) {
	int rot[4][4];

	for (int i = 0; i < 4; i++) {	//ȸ����Ų �����͸� �迭�� ����
		for (int j = 0; j < 4; j++) {
			rot[j][3 - i] = num[i][j];

		}
	}

	for (int i = 0; i < 4; i++) {		//ȸ����Ų �����͸� ���� �迭�� ����
		for (int j = 0; j < 4; j++) {
			num[i][j] = rot[i][j];

		}
	}
}

int mainmission20_1(void) {/*
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	printArray(arr);*/
	int arr[4][4];
	int num = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = num++;
		}

	}

	for (int i = 0; i < 4; i++) {
		printArray(arr);	//�迭 ���
		rotateArray(arr);	//90�� ȸ��
	}

	return 0;
}