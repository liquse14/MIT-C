/*����(Celcius) �µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
�� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� �����ϰ�
�� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���. ����� ������ ȭ���� �µ� ��ȯ�� ������ ������ ����.

Fah = 1.8 * Cel + 32
*/

#include <stdio.h>
double CelToFah(double cel) {
	return 1.8 * cel + 32;
}
double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}


int main41231241(void) {
	double cel = 30.5;
	double fah = CelToFah(cel);
	printf("cel=%f,fah=%f\n", cel, fah);

	cel = FahToCel(fah);
	printf("cel=%f,fah=%f\n", cel, fah);
	return 0;
}