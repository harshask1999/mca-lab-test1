#include<LPC21XX.h>

void main(){
	PINSEL0 = 0X00000000;
	IO0DIR = 0X0000000C;
	if(IOPIN0 == 1){
		IO0SET = 0XFFFFFFFF;
	}
	else if (IOPIN0 == 0){
		IOCLR0 = 0XFFFFFFFF;
	}
	else if(IOPIN1 == 1){
		IO1SET = 0XFFFFFFFF;
	}
	else if(IOPIN1 == 0){
		IOCLR1 = 0XFFFFFFFF;
	}
}