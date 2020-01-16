#include <stdio.h>
int main_prob_7_3(void) {
	int i = 0;		//반복문을 실행 0,2,4,6,8...100
	int sum = 0;

	do {
		sum += i;
		i += 2;
	} while (i <= 100);
	printf("합:%d\n", sum);	//문제에 대한 답을 올바르게 풀었는지 점검

	return 0;
}