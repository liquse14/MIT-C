#include <stdio.h>

int main_constant(void) {
	char buffer[] = "My String";	//프로그램에 저장된 문자열을 복사해서 배열에 저장
	char* sptr = "My String";		//프로그램에 저장되는 문자열의 주소를 가리킨다.

	sptr = "Our string";			//포인터 변수가 다른 문자열을 가리킨다.
//	buffer = "Our string";			//배열의 주소는 상수 (buffer는 변경 불가능)

	buffer[0] = 'O';	//별도의 데이터를 저장하는 배열(저장소)이므로 값은 변경 가능
	*sptr = 'O';		//불가능 -> 프로그램 영역의 주소를 가르키고 있으므로 내용은 변경 불가

	return 0;
}