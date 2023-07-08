#include<stdio.h>
#include<conio.h>
main()
{
	int a= 0,b= 1,nt,n;
	clrscr();
	printf("Enter your value=");
	scanf("%d",&n);
	printf("Fibonacci Serious =%d%d",a,b);
	nt=a+b;
	while (nt<=n)
	{
		printf("%d",nt);
		a=b;
		b=nt;
		nt=a+b;
	}
	getch();

}