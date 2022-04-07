#include <stdio.h>
float A,B,S,R,M,D;
main()
{
	printf("\n \nEnter a value:	>	");
	scanf("%f",&A);
	printf("\n \nEnter another value:	>	");
	scanf("%f",&B);
	
	S=(A+B);
	R=(A-B);
	M=(A*B);
	
	printf("\n \nSUM:	>	%f",S);
	printf("\n \nSUBSTRACTION:	>	%f",R);
	printf("\n \nMULTIPLICATION:	>	%f",M);
	if(A<1 || B<1)
	{
		printf("\n \nDIVISION INVALID");
	}
	
	else
	{
		D=(A/B);
		printf("\n \nDIVISION:	>	%f",D);
	}
}


