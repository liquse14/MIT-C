/*
n! = 1* 2* 3 *...*n을 계산하는 문제
sum = 0;	1,2,...,10
합 sum +=i;
*/

#include <stdio.h>
int main4535435 (void) {
	int n;				//i=횟수 n=입력값 result=결과값(초기치1)
	int result = 1;		//예상 결과값의 크기를 판단 ->int(4),long long(8)
	int i;
	printf("n:");			//도움말
	scanf("%d", &n);			//입력

	//n!을 계산
	for (i = 1; i <= n; i++)		//초기치?,조건식 i<=n,증감식 i++ 
	{
		result *= i;
	}								//i가 증가함에 따라 결과값이 누적됨
		printf("%d!=%d\n",n, result);
	return 0;
}