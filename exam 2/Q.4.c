#include<stdio.h>
#include<conio.h>

//WAP to print multiplication table using for loop

int main()
{
	int i,n;
	printf("enter any number :");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
