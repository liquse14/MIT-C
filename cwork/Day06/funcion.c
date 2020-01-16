/*#include<stdio.h>
void showHelp(void) {
	printf("두 개의 정수 입력 :");
}
int getNumber();

int add(int num1, int num2) {
	return num1 + num2;
}

void printResult(int, int, int);

int main37637646(void) {
	int num1, num2;
	//printf("두 개의 정수 입력 :");
	showHelp();		//도움말을 출력하는 함수
	//scanf("%d%d", &num1, num2);
	num1 = getnumber();
	num2 = getNumber();
	//int sum = num1 + num2;
	int sum = add(num1, num2);
	//printf("%d+%d=%d\n", num1, num2, sum);
	printresult(num1, num2, sum);
	return 0;
}

void printResult(int a, int b, int c) {
	printf("%d+%d=%d\n",a, b, c);
}
/*void showHelp() {
}
*/
//방법2:호출하는 위치(31 줄)보다 뒤(46 줄)에 함수를 정의

/*int getnumber() {
	int num;
	scanf("%d", &num);
	return 0;
}*/
