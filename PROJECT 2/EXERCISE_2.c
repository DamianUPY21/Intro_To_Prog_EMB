#include <stdio.h>
int AGE;
main()
{
	printf("\n \nHOW OLD ARE YOU?:	>	");
	scanf("%d",&AGE);

	if(AGE<18)
	{
		printf("\n \nWARNING!!!, YOU MUST HAVE 18+ TO ACCESS");
	}
	
	else
	{
		printf("\n \nWELCOME :)");
	}
}


