/*	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	 }
	return 0;
}*/
#include	<stdio.h>
int mainprob13_1_2(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}
	