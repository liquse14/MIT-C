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
	int win = 0;	//����� �¸��� Ƚ��
	int draw = 0;	//���

	srand(time(NULL));	//seed����
	int game;
	while (1) {
		//����� �Է�
		user = inputUserSelection();	//����ڰ� �Է�
		com = generateComSelection();
		game = decisionWin(user, com);
		printResult(user, com, 0);
			//��ǻ�Ͱ� ���� ���� ���� ����
		if (decisionWin(user, com) == 0) {
			//���
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
	printf("������ ��� : %d�� %d�� 1��\n", win, same);
	return 0;
}