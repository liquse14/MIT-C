#include<stdio.h>
#include<WiringPi.h>
#define LED_C_R 0
#define LED_C_Y 1
#define LED_C_G 2
#define LED_W_G 3
#define LED_W_R 4
#define LED_M_G 5
#define LED_M_R 6

void(main){
pinMode(LED_C_R,OUTPUT);
pinMode(LED_C_Y,OUTPUT);
pinMode(LED_C_G,OUTPUT);
pinMode(LED_W_G,OUTPUT);
pinMode(LED_W_R,OUTPUT);
pinMode(LED_M_G,OUTPUT);
pinMode(LED_M_R,OUTPUT);


	while(1){
		digitalWrite(LED_C_R,HIGH);
		digitalWrite(LED_W_G,HIGH);
		digitalWrite(LED_M_G,HIGH);
		delay(1000);
		digitalWrite(LED_C_R,
		}


