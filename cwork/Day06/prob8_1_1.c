#include<stdio.h>
int main423424(void)
{
	for(int i=1;i<100;i++){	//1~100���� �ݺ�
		//���� i : �Ǵ��ؾ� �� ��
		//7�� ���? : i % 7 == 0
	if(i % 7 ==0)
	{
		printf("%d\n", i);	//7�� ����� ���
	}

	else if (i % 9 == 0)
	{
		printf("%d\n", i);	//9�� ����� ���
	}
	}
	return 0;
}