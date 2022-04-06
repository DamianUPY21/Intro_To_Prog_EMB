#include<stdio.h>
float B,H,A;
main()
{
	printf("\n \n WRITE THE LENGHT:	>	");
	scanf("%f",&B);
	printf("\n \n WRITE THE WIDTH:	>	");
	scanf("%f",&H);
	if (B==0 || H==0)
	{
		printf("\n \n THE ENTERED VALUES ARE INVALID");
	}
	
	else
	{
		if (B==H && B>0 && H>0)
		{
			printf("\n \n THE VALUES ENTERED INDICATE THAT THE GEOMETRIC FIGURE IS A SQUARE");		
		}
		
		else
		{
			if (B>0 && H>0)
			{
				A=(B*H);
				printf("\n \n THE AREA OF THE RECTANGLE IS:	>	%f",A);
			}
			
			else
			{
				printf("\n \n THE ENTERED VALUES ARE INVALID");
			}
		}
	}	
}
