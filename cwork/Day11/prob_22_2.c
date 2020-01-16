/*문제 22-2 [구조체 배열의 선언]
앞서 문제 22-1에서 정의한 employee 구조체를 기반으로 길이가 3인
 배열을 선언하자. 그리고 세 명의 정보를 프로그램 사용자로부터 
입력 받아서 배열에 저장한 다음, 배열에 저장한 데이터를 순서대로
 출력하는 예제를 작성해 보자.
*/
#include <stdio.h>
#include "define.h"	//구조체 정의,상수 정의
#define MAX 3	//상수 정의  : preprocessor (10->3)
/*
struct employee {
	char name[20];
	char num[20];
	int infor;
};
*/

int main(void) {
	struct employee arr[MAX];
	int i;


	for (i = 0; i < MAX; i++) {
		printf("이름:");
		scanf("%s", arr[i].name);
		printf("주민번호");
		scanf("%s", arr[i].num);
		printf("급여정보");
		scanf("%d", &arr[i].infor);
	}
	for (i = 0; i < MAX; i++) {
		printf("이름:%s\n", arr[i].name);
		printf("주민번호:%s\n", arr[i].num);
		printf("급여정보:%d\n", arr[i].infor);
	}
	return 0;
}