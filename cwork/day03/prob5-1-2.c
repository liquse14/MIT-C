/*  ���� 2. ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ�
    double�� ������ ��������. �׸��� �� ���� ��Ģ���� �����
    �������. (��Ʈ) %f(float), %lf(double)
	*/
#include <stdio.h>
int main1243(void)
{
	double num1, num2;				//��Ģ������ ���� ������ �Է¹��� ���� ����
	printf("�Ǽ� �ΰ�");
	scanf("%lf%lf",&num1,&num2);    //call -by -reference :�Ű� ������ �ּҰ� 
	//��Ģ����
	printf("%lf\n", num1 + num2);
	printf("%lf\n", num1 * num2);
	printf("%lf\n", num1 / num2);
	printf("%lf\n", num1 - num2);
	return 0;
}