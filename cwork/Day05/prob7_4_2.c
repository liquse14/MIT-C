/*
n! = 1* 2* 3 *...*n�� ����ϴ� ����
sum = 0;	1,2,...,10
�� sum +=i;
*/

#include <stdio.h>
int main4535435 (void) {
	int n;				//i=Ƚ�� n=�Է°� result=�����(�ʱ�ġ1)
	int result = 1;		//���� ������� ũ�⸦ �Ǵ� ->int(4),long long(8)
	int i;
	printf("n:");			//����
	scanf("%d", &n);			//�Է�

	//n!�� ���
	for (i = 1; i <= n; i++)		//�ʱ�ġ?,���ǽ� i<=n,������ i++ 
	{
		result *= i;
	}								//i�� �����Կ� ���� ������� ������
		printf("%d!=%d\n",n, result);
	return 0;
}