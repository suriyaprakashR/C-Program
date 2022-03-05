#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char pass[20],e_pass[20];
    int num1,num2;
    printf("Create the password:-\n");
    scanf("%s",pass);
    printf("\nEnter two number to add:- ");
    scanf("%d %d",&num1,&num2);
    printf("Enter password to see the result:- ");
    scanf("%s",e_pass);


    if (!strcmp(pass,e_pass))
    {
        int sum = num1+num2;
        printf("The output is %d",sum);
    }
    else
    {
        printf("Your Password is incorrect..");
        getch();
    }

}