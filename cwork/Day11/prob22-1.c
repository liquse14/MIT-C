#include <stdio.h>

struct employee {
	char name[20];
	char num[20];
	int infor;
};


int main_prob22_1(void) {
	struct employee emp;
	printf("이름:");
	scanf("%s", emp.name);
	printf("주민번호");
	scanf("%s", emp.num);
	printf("급여정보");
	scanf("%d", &emp.infor);
	printf("이름:%s\n", emp.name);
	printf("주민번호:%s\n", emp.num);
	printf("급여정보:%d\n", emp.infor);

	return 0;
}