#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
    const char Name_List[6][20]={"Name_1","Name_2","Name_3","Name_4","Name_5","Name_6"};
    char Name[20];
    int found=0;

    printf("Enter your  name:-");
    scanf("%s",Name);
    
    for (int i=0;i<7;i++)
    {
        if(!strcmp(Name,Name_List[i]))
        {
            printf("\nYour Name is in the list!");
            found=1;
            break;
        }
        else
        {
            found=0;
        }
    }

    if (found != 1) 
    {
        printf("\nYour Name is not in the list...");
    }
    getch();
    return 0;
     
}