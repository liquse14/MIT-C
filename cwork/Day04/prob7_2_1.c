#include <stdio.h>
int main(void) {
	int i = 0;
	int num; 
	int total = 0;
	while (i < 5) {
		num = 0;
		while (num < 1)
		{
			printf("����");
			scanf("%d", &num);
		}
		total += num;
		i++;
	}
	printf("������ %d\n", total);
	return 0;
}