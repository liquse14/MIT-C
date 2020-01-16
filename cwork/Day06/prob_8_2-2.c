#include <stdio.h>
int main32616262(void) {
	int a, z;

	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (a == z)
				continue;
			if (a * 10 + a + z * 10 + z == 99) {
				printf("a=%d,z=%d\n", a, z);
				break;
			}
		}
	}
	return 0;
}