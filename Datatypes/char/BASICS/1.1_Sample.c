#include <stdio.h>


#define THIS 0x04
#define THAT 0x03

int main()
{
    int a= 0;
    a =5 || 2 |1;
    a <<=3;
    a ^=0xF;
    printf("ans: %d",a);
    }
