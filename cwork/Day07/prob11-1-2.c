/*���� 2. char�� 1���� �迭�� ����� ���ÿ� ���� ������ ��������
    �ʱ�ȭ�ϰ�, �ʱ�ȭ ���Ŀ��� ����� ������ ����ϴ� ������
    �ۼ��� ����.
	"Good time"->���ڿ��� '\0' ->�迭�� ũ��� 10*/

#include <stdio.h>
#include <string.h>//���ڿ��� �����ϴ� ���̺귯��
	//strlen:���ڿ��� ����
	//strcmp:string compare ���ڿ� ��
	//strcpy:string copy ���ڿ� ���� A->B (������ �ִ� B�� ������ ��������.)
	//strcat:string concaternation(?) A->B�߰��ؼ� ������	(B�� ������ ����)

int main_prob_11_1_2(void) {
	char buffer[] = "good time";	// "good time\0"
	//�迭�� ũ�� : sizeof(buffer) > �����Ʈ����? �� �ʿ� ����
	//buffer[i] != '\0'
	for (int i = 0; buffer[i] != '\0'; i++)
		printf("%c", buffer[i]);
		printf("\n");

		//strlen : string length ���ڿ��� ���̸� ���ϴ� �Լ�

}