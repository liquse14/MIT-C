#include <stdio.h>
int accumulate(int n) {
	register int sum = 0;		//register ���� : CPU���� ���Ǵ� �������͸� �̿�
		//���ֻ��Ǵ� �Լ����� ���� ������ �����Ҽ�����.
	for (int i = 1; i <= n; i++)
		sum += i;
		return sum;
}
int main_register(void) {

	//1~10������ ��������
	int result = accumulate(10);
	printf("��� = %d\n", result);
	return 0;
}