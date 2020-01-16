/*
숫자 맞추기 게임
1.세 개의 서로 다른 숫자를 발생(0~9)
+난수 발생->중복 여부 검사
+배열[3]
2.사용자로부터 숫자 3개를 입력 받는다.
3.strike와 ball을 판별
	+com가 가지고있는 데이터 : 배열에 저장되어 있고
	+사용자가 입력한 데이터를 배열에 저장->반복이 용이
	+strike 와 ball의 수를 저장하는 변수
	+3strike면 게임을 종료
-몇번만에 맞추었는지 횟수를 계수 :count 변수
	+반복 실행 :2,3,4 과정
	
#include <stdio.h>
#include <stdlib.h>	//난수 발생
#include <time.h>	//현재 시간을 얻어온다.
int main(void) {
	int com[3];		//컴퓨터가 발생시킨 수를 저장하는 배열
	int user[3];	//사용자가 입력한 숫자를 저장하는 배열
	int strike=0;
	int ball;
	int count = 1;	//컴퓨터가 발생한 난수를 저장하는 변수(임시로 저장)
	int value;
	int i, j;		//반복문을 실행하는 인덱스

	printf("Start Game\n");
	srand(time(NULL));	//난수 발생을 위한 seed 값을 설정 (현재시간으로)
	//컴퓨터가 발생시키는 수를 생성
	for (i = 0; i < 3; i++) {		//3개의 수를 발생
		do {	//반복문이 필요
			value = rand() % 10;	//0~9 난수 발생
			//value가 이전에 발생시킨 적이 있는지 검사:com[i]
			for (j = 0; j < i; j++) {
				if (value == com[j])	// 이전에 발생시킨 수와 같은 값
					break;	//j < i : 같은 값이 존재, j==i : 새로운 값
			}
		} while (j < i);	//같은 값이 존재하면 새로운 값을 발생시키도록 반복
		com[i] = value;
	}
	do {
		//strike와 ball을 초기화
		strike = 0;
		ball = 0;
		//사용자로부터 숫자를 입력 받는다.
		printf("세 개의 숫자 선택:");
		scanf("%d,%d,%d", &user[0], &user[1], &user[2]);
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (com[i] == user[j]) {	//strike 또는 ball
					if (i == j)	//strike
						strike++;
					else 
					ball++;
				}
			}
		}
		//strike와 ball이 계수됨
		printf("%d번째 도전 결과: %dstrike %dball!!\n",count,strike,ball);
		count++;	//초기치를 1부터 시작했으므로 printf보다 뒤에 넣는다.
	} while (strike != 3);	//3 strike :사용자가 컴퓨터의 수를 맞춘 경우
	printf("Game over!\n");
	return 0;
}*/