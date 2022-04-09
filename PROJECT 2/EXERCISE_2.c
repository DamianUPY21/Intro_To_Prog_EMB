#include <stdio.h>
int AGE;
char NAME[30];
main()
{
	printf("\n \nWHAT IS YOUR NAME?:	>	");
	scanf("%s",&NAME);
	printf("\n \nHOW OLD ARE YOU?:	>	");
	scanf("%d",&AGE);

	if(AGE<18)
	{
		printf("\n \nWARNING!!!, YOU MUST HAVE 18+ TO ACCESS");
	}
	
	else
	{
		printf("\n \nHI %s, WELCOME :)", NAME);
	}
}
