#include	<stdio.h>
int main_prob13_1_1(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;	//&arr[0]
	//포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산 ->ptr++
	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;	//나 자신을 변경하면서
		// (*ptr++) += 2; 같은 표현
	}

	for (int i = 0; i < 5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}