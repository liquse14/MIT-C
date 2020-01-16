#include	<stdio.h>

//int total = 0;		//전역 변수->static변수를 사용

int AddToTal(int num)
{
	static int total = 0;	//static 변수 ->처음에 호출될때 한번만 초기화가 됨

	total += num;
	return total;
}

int mainprob921 (void)
{
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d\n", AddToTal(num));
	}
	return 0;
}
