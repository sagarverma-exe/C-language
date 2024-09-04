#include<stdio.h>
#include<conio.h>

	//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
	//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
	//is pressed.

int add(int a,int b)
{
	return a+b;
}

int diff(int a,int b)
{
	return a-b;	
}

int multiply(int a,int b)
{
	return a*b;	
}

int divide(int a,int b)
{
	return a/b;	
}

int module(int a,int b)
{
	return a%b;	
}
void main()
{
	
	int input,var1,var2;
	
	begin:
	
	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for exit\n");
	
	printf("\nEnter Your Choice : ");
	scanf("%d",&input);
	
	if(input==0)
	{
		goto exit;
	}
	
	printf("\nEnter First Number : ");
	scanf("%d",&var1);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&var2);	
	
	switch(input)
	{
		case 1 : printf("\nSum of %d And %d is %d.\n",var1,var2,add(var1,var2));
		break;
		
		case 2 : printf("\nSubstraction of %d And %d is %d.\n",var1,var2,diff(var1,var2));
		break;
		
		case 3 : printf("\nMultiplication of %d And %d is %d.\n",var1,var2,multiply(var1,var2));
		break;
		
		case 4 : printf("\nDivision of %d And %d is %d\n",var1,var2,divide(var1,var2));
		break;
		
		case 5 : printf("\nModule of %d And %d is %d.\n",var1,var2,module(var1,var2));
		break;
		
		
		default : printf("\nEnter Valid Input!");
	}
	
	goto begin;
	
	exit:
	printf("\n the program has been ended");
	
}
