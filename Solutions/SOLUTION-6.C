/* Write a program to print Following Star Pattern:
*
* *
* * *
* * * *  */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,j;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)  // For Rows
	{
		for(j=1;j<i;j++) // For Columns
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}
