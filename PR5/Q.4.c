#include <stdio.h>
#include<conio.h>

//Develop a Program to print and find the sum of all elements of a given row & column from a 2D
//array.

void main() {
    int n1,n2,i,j,rowSum = 0,colSum = 0;
    int rowIndex, colIndex;

    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);

    int a[n1][n2];

    printf("Enter elements of the array:\n");
    for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
         printf("\n");
    }
    
     for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the row index to find the sum: ");
    scanf("%d", &rowIndex);
    printf("Enter the column index to find the sum: ");
    scanf("%d", &colIndex);

    for (j=0; j <n2; j++) 
	{
        rowSum +=a[rowIndex][j];
    }


    for (i=0;i<n1;i++) 
	{
        colSum +=a[i][colIndex];
    }


    printf("Sum of elements in row %d: %d\n", rowIndex, rowSum);
    printf("Sum of elements in column %d: %d\n", colIndex, colSum);


}

