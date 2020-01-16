/*도전5:가위 바위 보 게임
바위1,가위2,보3
-사용자의 선택을 입력 받는다
-컴퓨터가 선택
-승률을 판단
-승패 결과를 출력
-반복에 대한 결정


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* selection[4] = { "","바위 선택","가위 선택","보 선택" };//바위1,가위2,보3
char* result[3] = { "비겼습니다.","이겼습니다.","당신이 졌습니다." };//0:비김,1:이김,2:짐

void printResult(int user, int com, int r) {
	printf("당신은 %s, 컴퓨터는 %s,비겼습니다", selection[user], selection[com], result[r]);
}

int inputUserSelection() {
	int value;

	printf("바위는 1,가위는 2,보는 3: ");
	scanf("%d", &value);
	return value;
}

int generateComSelection() {
	return rand() % 3 + 1;
}

int main(void)
{
	int com, user;
	int win = 0;	//사람이 승리한 횟수
	int draw = 0;	//비김
	char* selection[4] = { "","바위 선택","가위 선택","보 선택" };//바위1,가위2,보3
	char* result[3] = { "비겼습니다.","이겼습니다.","졌습니다." };//0:비김,1:이김,2:짐

	srand(time(NULL));	//seed설정

	while (1) {
		//사용자 입력
		user = inputUserSelection();	//사용자가 입력
		com = generateComSelection();	//컴퓨터가 가위 바위 보를 선택
		//승패를 판단
		if (com == 1) {	//컴퓨터가 바위일 경우
			if (user == 1) {	//바위->비김
				draw++;
				printRessult(user, com, 0);
			}
			else if (user == 2) {	// 가위 -> 컴 승
				printResult(user, com, 2);	//종료
			}
			else	//사용자 승
			{
				win++;
				printResult(user, com, 1);
			}
		}

		else if (com == 2) {	//컴퓨터가 바위일 경우
			if (user == 1) {	//바위->사 승
				win++;
				printRessult(user, com, 1);
			}
			else if (user == 2) {	// 가위 -> 컴 승
				draw++;
				printResult(user, com, 2);	//종료
			}
			else	//사용자 승

				printResult(user, com, 2);
		}
	}
	else (com == 2) {	//컴퓨터가 바위일 경우
	if (user == 1) {	//바위->사 승
		printRessult(user, com, 2);
	}
	else if (user == 2) {	// 가위 -> 컴 승
		win++;
		printResult(user, com, 1);	//종료
	}
	else	//사용자 승
		draw++;
	printResult(user, com, 0);
		}
}
*/