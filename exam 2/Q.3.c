#include<stdio.h>
#include<conio.h>

//WAP to input any character and check whether it is alphabet , number or special character

int main()
{
	char input;
	
	printf("Enter Any Character :");
	scanf("%c",&input);
	
	if(input=='1'||input=='2'||input=='3'||input=='4'||input=='5'||input=='6'||input=='7'||input=='8'||input=='9'||input=='0')
	{
		printf("Input Is A Number");
	}
	else if(input=='@'||input=='#'||input=='$'||input=='%'||input=='^'||input=='&'||input=='*')
	{
		printf("Input Is A Special Character");
	}
	else
	{
		printf("Input Is A Alphabet");
	}
}
