#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,count=0;
	clrscr();
	printf("Enter Weather=");
	scanf("%i",&a);
	if(a==0 || a==1)
	{
		printf("%d is not prime number ",a);
	}
	else
	{
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				count=1;
			}
		}

	}
	if (count==0)
	{
		printf("Number is prime");

	}
	else
	{
		printf("Number is not prime");
	}
	getch();

}
