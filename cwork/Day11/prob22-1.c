#include <stdio.h>

struct employee {
	char name[20];
	char num[20];
	int infor;
};


int main_prob22_1(void) {
	struct employee emp;
	printf("�̸�:");
	scanf("%s", emp.name);
	printf("�ֹι�ȣ");
	scanf("%s", emp.num);
	printf("�޿�����");
	scanf("%d", &emp.infor);
	printf("�̸�:%s\n", emp.name);
	printf("�ֹι�ȣ:%s\n", emp.num);
	printf("�޿�����:%d\n", emp.infor);

	return 0;
}