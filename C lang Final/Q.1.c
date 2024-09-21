#include<stdio.h>

// wap a program find the third angle of a triangle if two angle are given.

int main()
{
	
	int angleA,angleB,angleC;
	
	printf("Enter angleA =");
	scanf("%d",&angleA);
	
	printf("Enter angleB=");
	scanf("%d",&angleB);
	
	angleC=180 - (angleA + angleB);
	
	printf("angleC=%d",angleC);
}	
