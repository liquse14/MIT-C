/*문제 2. int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로
    초기화하고, int형 포인터 변수 ptr1과 ptr2를 선언하여 각각
    num1과 num2를 가리키게 하자. 그리고 이 상태에서 포인터 변수
    ptr1과 ptr2를 이용해서 num1 값을 10 증가시키고, num2의 값을
    10 감소시키자.
    이제 두 포인터 변수 ptr1과 ptr2가 가리키는 대상을 서로 바꾸
    자. 즉, 포인터 변수 ptr1이 num2를 가리키게 하고, 포인터 변수
    ptr2가 num1을 가리키게 하자. 그리고 마지막으로 ptr1과 ptr2가
    가리키는 변수에 저장된 값을 출력하자.*/
#include <stdio.h>
int main_prob12_1_2(void) {
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	//num1을 10증가	: 10->20
	*ptr1 += 10;	//10->20
	//num2를 10감소 : 20 -> 10
	*ptr2 -= 10;	//20->10
	ptr1 = &num2;	//ptr1->num2
	ptr2 = &num1;	//ptr2->num1
	//출력
	printf("*ptr1 = %d\n", *ptr1);	// 10
	printf("*ptr2 = %d\n", *ptr2);	// 20
	return 0;
}