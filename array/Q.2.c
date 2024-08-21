#include<stdio.h>

void main()
{
	int i,n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter your value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter a length of array %d",n);
	
}
