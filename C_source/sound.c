#include <stdio.h>
#include <wiringPi.h>
#include <softTone.h>
#define SPEAKER 6
#define	C 261.63
#define D 293.66
#define E 329.63
#define F 349.23
#define G 391.00
#define A 440.00

float notes[][2]={
	{C,8},{D,8},{E,8},{F,8},{G,8},{A,8},{E,4},
	{G,8},{G,8},{E,8},{E,8},{D,2},
	{G,8},{G,8},{A,8},{A,8},{G,8},{G,8},{E,4},
	{G,8},{E,8},{D,8},{E,8},{C,2}
};

int main(void){
	if(wiringPiSetup() == -1){return -1;}
	softToneCreate(SPEAKER);
	for(int i =0; i<sizeof(notes) ; i++){
		softToneWrite(SPEAKER,notes[i][0]);
		delay(4/notes[i][1]*1000-10);
		softToneWrite(SPEAKER,0);
		delay(10);
	}
	return 0;
}

