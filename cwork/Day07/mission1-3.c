/* ���� 3
���� 3. �� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ�
    ���α׷��� �ۼ��� ����.
	������ ��: 6 9 ->3

	��Ŭ���� ȣ����
	6(���� ��)9(ū ��) ->�ִ�����
	9(ū ��)%6(���� ��)6(���� ��)->�ִ������� ����.
	*/

#include<stdio.h>
int gcd(int large, int small) {
	if (small == 0)			//�������� 0�̸� ū���� �ִ�����
		return large;
	else
		return gcd(small, large % small);
}
int mainmission1_3(void) {
	int num1, num2;

	printf("�ΰ��� ����:");
	scanf("%d%d",&num1,&num2);

	if (num1 > num2) {	//num1(���� ��)
		int tmp = num1; //num1�� num2�� ��ȯ
		num1 = num2;
		num2 = tmp;
	}
	//num1<num2
	printf("�ִ����� = %d\n", gcd(num2, num1));
	return 0;
}