/*
���ڿ� �Է�->�����Ϸ��� �迭->�迭�� ũ��
'\0'�� ���Ǵ� ���� : ���ڿ��� ���� �Ǵ��ϱ� ����(���ڿ��� ���̸� �˱� ����)
*/

#include <stdio.h>
#include <string.h>

int main_string_input(void) {
	char buffer[1024];		//�� ����Ʈ���� �𸣱� ������ ����Ǵ� ũ�⺸�� ū������ ��´�.
	printf("���ڿ� �Է�:");
	scanf("%s", buffer);	//scanf &num(�ּ�) char �迭�� �ּ� ->buffer (�迭�� �̸�)
	//scanf("%s",buffer):	//���� ������ �Է�
	printf("%s\n", buffer);
	printf("���ڿ��� ũ�� = %d\n", strlen(buffer));

	//���ǻ���
	int ch =getchar();	//'\n' (Enter)�� ������ �о� ���δ�		//Good[Enter]

	printf("���ڿ� �Է� :");		//���ڿ� ���� �Է�
	gets(buffer);	//stdio.h���� ���ǵ� ���̺귯�� �Լ�	//"good time\0"

	printf("%s\n", buffer);
	printf("���ڿ��� ũ�� = %d\n", strlen(buffer));

	fgets(buffer, 1024, stdin);
	printf("%s\n", buffer);
	printf("���ڿ��� ũ�� = %d\n", strlen(buffer));

	int num;
	//sscanf(buffer, "%d", &num);
	//fscanf(stdin, "%d",&num);
	return 0;
}