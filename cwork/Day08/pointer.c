/*
포인터 변수 : 변수,함수의 주소를 저장하는 변수
c언어 : 주소를 사용해서 함수 및 메모리, I/O에 접근
기존 데이터 타입 : 값을 저장
*/

#include <stdio.h>
int main_pointer(void){
	int num = 10;
	int* pnum = &num;	//포인터 변수 : 변수 num의 주소가 저장된다.
	int* ptr;
	ptr = &num;

	printf("num = %d\n", num);	//직접 접근 : 10
	printf("num = %d\n", pnum);	//포인수 변수를 통해서 num에 접근 : 10


	*ptr = 20;	//num : 10->20 num = 20

	//가르키는 변수의 데이터타입에 따라서 포인터 변수의 데이터 타입도 다르다.
	int var1 = 20;
	int* pvar = &var1;

	double d1 = 2.64;
	double* dptr = &d1;

	//포인터 변수는 주소를 저장하지만
	//포인터를 통해서 원래 메모리에 접근하려면 데이터 타입이 무엇인지 알아야 조작가능

	 return 0;
}