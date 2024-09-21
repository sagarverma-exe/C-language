#include<stdio.h>
#include<conio.h>

int main()
{
	//wap to sum of the elements of a matrix...
	
	int r,c,n,j,x,y,sum;
	
	printf("Enter the number Of  rows in the array :");
	scanf("%d",&r);
	
	printf("Enter the number Of  columns in the array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(n=0; n<r; n++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d] : ",n,j);
			scanf("%d",&a[n][j]);
		}
		printf("\n");
	}
	
	for(n=0; n<r; n++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter the value of a[%d][%d] :",n,j);
		}
	}
	for(n=0; n<r; n++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+a[n][j];
		}	
	}
	printf("sum is %d",sum);

	
}