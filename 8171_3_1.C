// WAP to wap to variables using three variables.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the valuye of b : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping thr variables a and b : ");
	printf("\nThe value of a  : %d",a);
	printf("\nThe value of b : %d",b);
	getch();
}