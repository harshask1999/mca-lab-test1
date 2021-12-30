#include<LPC21XX.h>
unsigned int a;
void delay(unsigned int c){
	for(a=1;a<=60000;a++);
}
int main(){
	unsigned long int j;
	int i,a[]={0x3f,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	PINSEL0=0x00000000;
	IO0DIR|=0xFFFFFFFF;
	while(1){
		for(j=0;j<10;j++){
			IO0SET=IO0SET|a[j];
			for(i=0;i<10;i++){	
				IO0SET= IO0SET|(a[i]<<8);
				delay(100000);
				IO0CLR= IO0CLR|(a[i]<<8);
			}
			IO0CLR=a[j];
		}
	}
}