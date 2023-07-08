#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,b;
	clrscr();
	b=i=1;
	printf("Enter your value=");
	scanf("%d",&a);
	while(i<=a)
	{
		b*=i;
		i++;
	}
	printf("Factor of %d is %d",a,b);
	getch();

}