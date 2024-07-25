#include<stdio.h>
#include<conio.h>

 main()
{
	int i=1;
	int y;
	int x;
	printf("Enter y :");
	scanf("%d",&y);
	
	while(i<=10)
	{
		x=y*i;
		printf("%d x %d = %d\n",y,i,x);
		i++;
	}

}
