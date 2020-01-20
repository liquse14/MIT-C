#include <wiringPi.h>
#include <stdio.h>

#define INFRARED 11
#define LED 12

int main(void) {

	if (wiringPiSetup() == -1) { return 1; }
	// wiringPi 비활성화시 종료

	pinMode(INFRARED, INPUT);
	//적외선 센서는 감지 여부를 전송해주므로 INPUT이다.
	pinMode(LED, OUTPUT);

	for (;;) {
		//무한루프

		if (digitalRead(INFRARED) == HIGH){
			//적외선 센서가 감지했을 때
			digitalWrite(LED,HIGH);
			}
		else {
			//적외선 센서에 아무것도 감지되지 않을때
			digitalWrite(LED, LOW);
		}

	}
	return 0;
}
