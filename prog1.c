#include <stdio.h>


int main(int argc, char *argv[]){
   unsigned char value1 = 0xc0;
   unsigned char value2 = 0x80;
   char svalue1 = 0xc0;
   char svalue2 = 0x80;

   unsigned char result = value1 + value2;
   char sresult = svalue1 + svalue2;

   printf("value1(%d) + value2(%d) = result(%d)\n",value1,value2,result);
   printf("value1(%x) + value2(%x) = result(%x)\n",value1,value2,result);

   printf("svalue1(%d) + svalue2(%d) = sresult(%d)\n",svalue1,svalue2,sresult);
   printf("svalue1(%x) + svalue2(%x) = sresult(%x)\n",svalue1,svalue2,sresult);

   return 0;
}
