#include<stdio.h>
#include<conio.h>

//WAP that prints the perimeter of the rectangle to take its height and width as input

int main()
{
	int l,b,sum;
	printf("Enter The Height Of The Rectangle :");
	scanf("%d",&l);
	
	printf("Enter The Width Of The Rectangle :");
	scanf("%d",&b);
	
	sum = (l+b)+(l+b);
	
	printf("\nPerimeter Of The Rectangle is %d.",sum);
}
