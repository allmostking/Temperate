#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,r,o;
	clrscr();
	printf("Enter your number=");
	scanf("%d",&a);

	while(a!=0)
	{
		r=a%10;
		b=b*10+r;
		a/=10;

	}
	printf("\nyour reversed num is =%d",b);
	if (a==b)
	{
		printf("palindrome number is=%d",r);
	}
	else
	{
		printf("\n not Palindrome number is=%d",r);
	}
	getch();
}
