// WAP to swap two variables without additional variable.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping two vaariables a and b :  ");
	printf("\nThe value of a : %d",a);
	printf("\nThe value of b : %d",b);
	getch();
}