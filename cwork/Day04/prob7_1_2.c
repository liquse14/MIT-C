#include <stdio.h>
int main_prob7_1_2(void) {
	int num;
	printf("�����Է�");
	scanf("%d", &num);
	int i = 0;
	while (i<num) {
		printf("%d\n", 3*(i+1));
		i++;
	}
	return 0;
}