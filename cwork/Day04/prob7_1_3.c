#include <stdio.h>
int main_prob7_1_3(void) {
	int total = 0;
	int num = 1;
	while (num!=0) 
	{
		printf("����");
	    scanf("%d", &num);
	    total+=num;
	}
	printf("��%d\n",total);
	return 0;
}