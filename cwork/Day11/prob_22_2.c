/*���� 22-2 [����ü �迭�� ����]
�ռ� ���� 22-1���� ������ employee ����ü�� ������� ���̰� 3��
 �迭�� ��������. �׸��� �� ���� ������ ���α׷� ����ڷκ��� 
�Է� �޾Ƽ� �迭�� ������ ����, �迭�� ������ �����͸� �������
 ����ϴ� ������ �ۼ��� ����.
*/
#include <stdio.h>
#include "define.h"	//����ü ����,��� ����
#define MAX 3	//��� ����  : preprocessor (10->3)
/*
struct employee {
	char name[20];
	char num[20];
	int infor;
};
*/

int main(void) {
	struct employee arr[MAX];
	int i;


	for (i = 0; i < MAX; i++) {
		printf("�̸�:");
		scanf("%s", arr[i].name);
		printf("�ֹι�ȣ");
		scanf("%s", arr[i].num);
		printf("�޿�����");
		scanf("%d", &arr[i].infor);
	}
	for (i = 0; i < MAX; i++) {
		printf("�̸�:%s\n", arr[i].name);
		printf("�ֹι�ȣ:%s\n", arr[i].num);
		printf("�޿�����:%d\n", arr[i].infor);
	}
	return 0;
}