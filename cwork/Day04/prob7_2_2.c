#include <stdio.h>
int main_prob7_2_2(void) {
	int i, j;
	i = 0;
	while (i < 5) {	//i 0~4
		j = 0;
		while (j++ < i) {	//j : 0�� ����ϴ� Ƚ��
			printf("0 ");
		}
		printf("*\n");
		i++;	//i�� ���� ��ġ
	}
	return 0;
}