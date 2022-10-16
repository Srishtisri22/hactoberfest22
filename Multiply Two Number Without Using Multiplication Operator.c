#include<stdio.h>

float multiply(float x, float y);

int main()

{

   float a, b;

   printf("Enter two number: ");

   scanf("%f %f",&a, &b);

   float result = multiply(a,b);

   printf("Result = %.2f",result);

   return 0;

}

// Recursive function to find 

// multiplication of two numbers

float multiply(float x, float y)

{

   if(y==0) return 0; 

   else if(y>0) return( x+ multiply(x,y-1) );

   else return -multiply(x,-y);

}
