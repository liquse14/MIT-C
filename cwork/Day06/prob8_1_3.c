#include <stdio.h>
int main125234(void) {
	int a, b, c;
	printf("국어");
	scanf("%d", &a);
	printf("영어");
	scanf("%d", &b);
	printf("수학");
	scanf("%d", &c);
	int d = (a + b + c);	//d=합
	int mean = d / 3;		//mean=평점
	if (90 <= mean) {
		printf("A\n");
	}
	else if (80 <= mean) {
		printf("B\n");
	}
	else if (70 <= mean) {
	printf("C\n");
	}
	else if (50 <= mean) {
		printf("D\n");
	}
	
	else
		printf("F\n");
		return 0;
}	