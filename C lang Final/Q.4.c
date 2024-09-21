#include<stdio.h>

// wap a program in c to make a such a pattern using loop concept.

int main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
	printf("\n");
	}	
	
}