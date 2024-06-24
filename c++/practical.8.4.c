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
   
printf("(x+y+z)3=%d", (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x)));

}
