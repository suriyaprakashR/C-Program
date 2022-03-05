#include <stdio.h>

int main()
{
    int i =9;
    {
         int i =10;
         printf("%d",i);
    }
    printf("%d",i);
}