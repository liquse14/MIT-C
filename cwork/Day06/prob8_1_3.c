#include <stdio.h>
int main125234(void) {
	int a, b, c;
	printf("����");
	scanf("%d", &a);
	printf("����");
	scanf("%d", &b);
	printf("����");
	scanf("%d", &c);
	int d = (a + b + c);	//d=��
	int mean = d / 3;		//mean=����
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