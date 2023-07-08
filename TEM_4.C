#include<stdio.h>
#include<conio.h>
main()
{
	int a,sum,fd,ld;
	clrscr();
	printf("Enter your value=");
	scanf("%d",&a);
	ld=a%10;
	while(a>=10)
	{
		a=a/10;
	}
	fd=a;
	sum=fd+ld;
	printf("Sum of first digit and last digit is =%d",sum);
	getch();
}