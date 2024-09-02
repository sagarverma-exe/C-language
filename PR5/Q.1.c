#include<stdio.h>
#include<conio.h>
//Q.1 Negative Elements in 1D Array
//Develop a program that finds all the negative elements from a given 1D array.
void main()
{
	int n,i;
	
	printf("Enter the array's size:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	 printf("Negative elements in the array are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}
	
	
	