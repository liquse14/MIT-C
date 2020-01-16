#include<stdio.h>
int main423424(void)
{
	for(int i=1;i<100;i++){	//1~100까지 반복
		//실행 i : 판단해야 할 수
		//7의 배수? : i % 7 == 0
	if(i % 7 ==0)
	{
		printf("%d\n", i);	//7의 배수면 출력
	}

	else if (i % 9 == 0)
	{
		printf("%d\n", i);	//9의 배수면 출력
	}
	}
	return 0;
}