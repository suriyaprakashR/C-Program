#include <stdio.h>

int main()
{
	char k='k';
	printf("Size of the char is %d bytes\n",sizeof(k));
	printf("Value of a :%c\n",k);
	printf("ASCII value of 'K' is %d\n",k);



	// overflow in signed char (range -128 to 127)
       	
	int i = 0;
	char a;	
	while(1)
	{
		
		i++;
		a=i;
		printf("int :%d  char :%d,\n",i,a);
		if (i == 300)
			break;

	}


	//overflow in unsigned char (range 0 to 255)
	
	i =0;
	unsigned char b = 0;

	while(1)
	{
		i++;
		b=i;
		printf("int :%d char :%d,\n",i,b);
		if(i == 300)
			break;
	}

return 0;       	
			
}
