/*����5:���� ���� �� ����
����1,����2,��3
-������� ������ �Է� �޴´�
-��ǻ�Ͱ� ����
-�·��� �Ǵ�
-���� ����� ���
-�ݺ��� ���� ����


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* selection[4] = { "","���� ����","���� ����","�� ����" };//����1,����2,��3
char* result[3] = { "�����ϴ�.","�̰���ϴ�.","����� �����ϴ�." };//0:���,1:�̱�,2:��

void printResult(int user, int com, int r) {
	printf("����� %s, ��ǻ�ʹ� %s,�����ϴ�", selection[user], selection[com], result[r]);
}

int inputUserSelection() {
	int value;

	printf("������ 1,������ 2,���� 3: ");
	scanf("%d", &value);
	return value;
}

int generateComSelection() {
	return rand() % 3 + 1;
}

int main(void)
{
	int com, user;
	int win = 0;	//����� �¸��� Ƚ��
	int draw = 0;	//���
	char* selection[4] = { "","���� ����","���� ����","�� ����" };//����1,����2,��3
	char* result[3] = { "�����ϴ�.","�̰���ϴ�.","�����ϴ�." };//0:���,1:�̱�,2:��

	srand(time(NULL));	//seed����

	while (1) {
		//����� �Է�
		user = inputUserSelection();	//����ڰ� �Է�
		com = generateComSelection();	//��ǻ�Ͱ� ���� ���� ���� ����
		//���и� �Ǵ�
		if (com == 1) {	//��ǻ�Ͱ� ������ ���
			if (user == 1) {	//����->���
				draw++;
				printRessult(user, com, 0);
			}
			else if (user == 2) {	// ���� -> �� ��
				printResult(user, com, 2);	//����
			}
			else	//����� ��
			{
				win++;
				printResult(user, com, 1);
			}
		}

		else if (com == 2) {	//��ǻ�Ͱ� ������ ���
			if (user == 1) {	//����->�� ��
				win++;
				printRessult(user, com, 1);
			}
			else if (user == 2) {	// ���� -> �� ��
				draw++;
				printResult(user, com, 2);	//����
			}
			else	//����� ��

				printResult(user, com, 2);
		}
	}
	else (com == 2) {	//��ǻ�Ͱ� ������ ���
	if (user == 1) {	//����->�� ��
		printRessult(user, com, 2);
	}
	else if (user == 2) {	// ���� -> �� ��
		win++;
		printResult(user, com, 1);	//����
	}
	else	//����� ��
		draw++;
	printResult(user, com, 0);
		}
}
*/