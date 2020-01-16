#include <stdio.h>
int accumulate(int n) {
	register int sum = 0;		//register 변수 : CPU내에 사용되는 레지스터를 이용
		//자주사용되는 함수에서 빠른 연산을 수행할수있음.
	for (int i = 1; i <= n; i++)
		sum += i;
		return sum;
}
int main_register(void) {

	//1~10까지의 합을구함
	int result = accumulate(10);
	printf("결과 = %d\n", result);
	return 0;
}