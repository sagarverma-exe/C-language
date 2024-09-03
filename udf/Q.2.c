#include<stdio.h>
#include<conio.h>

//Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
void divisible(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("Number Is Divisible By Both 3 And 5");
	}
	else if(n%3==0)
	{
		printf("Number Is Divisible By Only 3");
	}
	else if(n%5==0)
	{
		printf("Number Is Divisible By Only 5");
	}
	else
	{
		printf("Number Is Not Divisible  By Both 3 And 5");
	}
}

int main()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	divisible(n);

	return 0;
}
