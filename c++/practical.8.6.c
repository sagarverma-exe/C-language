#include<stdio.h>

int main () 

{
int x,y,z;



printf("enter a value of x:");
     
  scanf("%d",&x);


printf("enter a value of y:");
     
  scanf("%d",&y);

printf("enter a value of z:");
     
  scanf("%d",&z);
   
printf("(x+y+z)2=%d", (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x)));

}
