#include <stdio.h>

int main34124(void) {
	int a;
	printf("입력");
	scanf("%d", &a);
	switch (a-1) {
	case 1:
		printf("1은 1\n");
		break;
	case 2:
		printf("2은 2\n");
		break;
	case 3:
		printf("3은 3\n");
		break;
	default:
		printf("다아님\n");
	}
	return 0;
}