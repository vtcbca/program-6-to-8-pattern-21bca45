/* Write a Program to Print Following Star Pattern(Reverse Triangle):
* * * * *
    * * *
	*  */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j,k;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&a);
	for(i=a;i>=1;i=i-2) // Outer Loop
	{
		for(j=a-1;j>=i;j--)      // Space loop
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)  // print loop
		{
			printf("*");
		}
		printf("\n");    // For New Line
	}
	getch();
}
