#include<wiringPi.h>
#include<stdio.h>
#define LED_G 0
#define LED_R 2
int main(void){
	if(wiringPiSetup() == -1){
		printf("setup wiringPi failed!");
		return 1;
	}

	pinMode(LED_G,OUTPUT);
	pinMode(LED_R,OUTPUT);
	while(1){
		digitalWrite(LED_G,LOW);
		printf("LED OFF...\n");

		delay(500);

		digitalWrite(LED_G,HIGH);
		printf("LED ON...\n");

		delay(500);
                digitalWrite(LED_R,LOW);
                printf("LED OFF...\n");

                delay(500);

                digitalWrite(LED_R,HIGH);
                printf("LED ON...\n");

                delay(500);

		}
	return 0;
}
