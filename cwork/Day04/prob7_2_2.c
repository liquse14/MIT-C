#include <stdio.h>
int main_prob7_2_2(void) {
	int i, j;
	i = 0;
	while (i < 5) {	//i 0~4
		j = 0;
		while (j++ < i) {	//j : 0을 출력하는 횟수
			printf("0 ");
		}
		printf("*\n");
		i++;	//i의 증가 위치
	}
	return 0;
}