#include <stdio.h>

int main_constant(void) {
	char buffer[] = "My String";	//���α׷��� ����� ���ڿ��� �����ؼ� �迭�� ����
	char* sptr = "My String";		//���α׷��� ����Ǵ� ���ڿ��� �ּҸ� ����Ų��.

	sptr = "Our string";			//������ ������ �ٸ� ���ڿ��� ����Ų��.
//	buffer = "Our string";			//�迭�� �ּҴ� ��� (buffer�� ���� �Ұ���)

	buffer[0] = 'O';	//������ �����͸� �����ϴ� �迭(�����)�̹Ƿ� ���� ���� ����
	*sptr = 'O';		//�Ұ��� -> ���α׷� ������ �ּҸ� ����Ű�� �����Ƿ� ������ ���� �Ұ�

	return 0;
}