#include <wiringPi.h>
#include <stdio.h>

#define LED1 0
#define LED2 1
#define LED3 2
#define LED4 3

int main (void){

	if(wiringPiSetup() == -1) return -1;

	unsigned char LED[4]={LED1,LED2,LED3,LED4};

	unsigned char i;
	unsigned char time = 100;

	for (i=0;i<sizeof(LED);i++){
		pinMode(LED[i],OUTPUT);
	}

	while (1){
		for(i=0;i<sizeof(LED);i++){
			digitalWrite(LED[i],HIGH);
			delay(time);
			digitalWrite(LED[i],LOW);
			time--;

			if(time <=0) time = 100;
		}
	}
}
