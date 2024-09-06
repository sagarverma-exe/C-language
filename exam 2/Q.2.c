#include<stdio.h>
#include<conio.h>

//WAP to find out max from 4 numbersusing nested if

int main()
{
	int a,b,c,d;
	
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	printf("Enter third number :");
	scanf("%d",&c);
	printf("Enter fourth number :");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}
