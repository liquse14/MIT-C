#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateComSelection() {
	return rand() % 3 + 1;
}
	int decisionWin(int user, int com) {
	if()
	}

int main(void)
{
	int com, user;
	int win = 0;	//사람이 승리한 횟수
	int draw = 0;	//비김

	srand(time(NULL));	//seed설정
	int game;
	while (1) {
		//사용자 입력
		user = inputUserSelection();	//사용자가 입력
		com = generateComSelection();
		game = decisionWin(user, com);
		printResult(user, com, 0);
			//컴퓨터가 가위 바위 보를 선택
		if (decisionWin(user, com) == 0) {
			//비김
			draw++;
		}
		else if (game == 1) {
			win++;

			break;
		}
		else{

			break;
		}
	}
	printf("게임의 결과 : %d승 %d무 1패\n", win, same);
	return 0;
}