/*  문제 2. 프로그램 사용자로부터 두 개의 실수를 입력 받아서
    double형 변수에 저장하자. 그리고 두 수의 사칙연산 결과를
    출력하자. (힌트) %f(float), %lf(double)
	*/
#include <stdio.h>
int main1243(void)
{
	double num1, num2;				//사칙연산을 위한 데이터 입력받을 변수 선언
	printf("실수 두개");
	scanf("%lf%lf",&num1,&num2);    //call -by -reference :매개 변수에 주소가 
	//사칙연산
	printf("%lf\n", num1 + num2);
	printf("%lf\n", num1 * num2);
	printf("%lf\n", num1 / num2);
	printf("%lf\n", num1 - num2);
	return 0;
}