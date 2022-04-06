#include<stdio.h>
#include<stdlib.h>
main()
{	
	float a,b,c;

	printf("\n \n ENTER FIRST VALUE:	>	");
	scanf("%f",&a);
	printf("\n \n ENTER SECOND VALUE:	>	");
	scanf("%f",&b);
	printf("\n \n ENTER THIRD VALUE:	>	");
	scanf("%f",&c);

	if (a==b && b==c)
	{
		printf("\n \n ALL THE NUMBERS ARE THE SAME, IT IS NOT POSSIBLE TO SEARCH FOR THE GREATEST NUMBER");
		exit(-1);
	}

if(c>b&&b>a) printf("\n \n THE GREATER NUMBER IS:	>	%f",c);

else if(a>b&&b>c)printf("\n \n THE GREATER NUMBER IS:	>	%f",a);

else if(a>b&&c>a)printf("\n \n THE GREATER NUMBER IS:	>	%f",c);

else if(a>c&&c>b)printf("\n \n THE GREATER NUMBER IS:	> %f",a);

else if(b>c&&b>a&&a>c)printf("\n \n THE GREATER NUMBER IS:	>	%f",b);

else printf("\n \n THE GREATER NUMBER IS:	>	%f",b);

}
