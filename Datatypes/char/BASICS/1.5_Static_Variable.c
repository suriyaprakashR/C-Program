#include<stdio.h>

void test_fn()
{
    static int x = 10;
    x=x+10;
    printf("\n%d",x);
   
}

int main()
{
    printf("hello");
    for(int i=0;i<=10;i++)
    {
        test_fn();
        printf("\n%d",i);

    }
}