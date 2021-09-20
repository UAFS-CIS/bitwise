#include <stdio.h>

int main(int argc, char *argv[]){
	unsigned char codes = 0b01001101;
	unsigned char mask = 0x80;

	unsigned char status = codes | mask;

	printf("0x%x\n",status);

	return 0;
}
