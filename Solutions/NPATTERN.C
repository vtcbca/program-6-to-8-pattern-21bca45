/*  Write a Program to Print Following Number Pattern:
     1
   2 1 2
 3 2 1 2 3     */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,c,p;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&a);
	r=1;
	while(r<=a)
	{
		p=4;
		while(p>=r)
		{
			printf(" ");
			p--;
		}
		c=r;
		while(c>=1)
		{
			printf("%d",c);
			c--;
		}
		c=c+2;
		while(c<=r)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
		r++;
	}
	 getch();
}