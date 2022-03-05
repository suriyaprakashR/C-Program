#include <stdio.h>

int main()
{
    int arr[]={};

    for (int i=0;i<100;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<100;i++)
    {
        printf("\n%d",arr[i]);
    }
}