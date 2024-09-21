#include<stdio.h>

// wap a program in c to find a cube of any number using user define function 

int cube(int n)
{
	int i;
	return n*n*n;

}

int main()
{
	int x;
	
	printf("Enter Any Number : ");
	scanf("%d",&x);
	
	printf("%d",cube(x));

	
}

