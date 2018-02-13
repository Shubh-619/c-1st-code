#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,n=0,h;
	printf("Enter the number of hours employees working:");
	scanf("%d",&h);
	while(i<10)
	{
		n+=12*h;
		i++;
		
	}printf("\n The wage is : %d",n);

getch();
}
