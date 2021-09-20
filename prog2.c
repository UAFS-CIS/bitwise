#include <stdio.h>

#define SW1ENABLED 128
#define SW2ENABLED 16

int statusSet(unsigned char statusReg, unsigned char FLAG);

int main(int argc, char *argv[]){
   unsigned char statusReg = 0x91;
   int result;

   result=statusSet(statusReg,SW2ENABLED);
   if(result==1){
      printf("Flag is on\n");
   }else{
      printf("Flag is off\n");
   }



   return 0;
}

int statusSet(unsigned char statusReg, unsigned char FLAG){
   unsigned char result = statusReg & FLAG;
   if(result==FLAG){
      return 1;
   }else{
      return 0;
   }
}
