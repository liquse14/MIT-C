#include <stdio.h>

int main23234234234(void)
{
	//������ ��ǥ�� �����ϴ� ����
	int x1, y1; //�»���� ��ǥ
	int x2, y2; //���ϴ��� ��ǥ
	//��ǥ�� �Է�
	printf("�»���� ��ǥ��(2 4) : ");
	scanf("%d %d", &x1, &y1);
	//���ϴ��� ��ǥ
	printf("������ ��ǥ��(4 8) : ");
	scanf("%d %d", &x2, &y2);
	int width = x2 - x1;	//��	(x2 > x1)
	int height = y2 - y1;	//����	(y2	> y1)
	int area = width * height;
	printf("���� = %d\n" , area);
	return 0;
}