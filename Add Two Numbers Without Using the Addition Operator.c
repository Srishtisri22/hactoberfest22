#include<stdio.h>

int add(int x, int y)

{

   if(y == 0)

     return x;

   else

     return add( x^y, (x & y) << 1);

}

int main()

{

   int a, b, sum;

   printf("Enter two numbers: ");

   scanf("%d %d", &a, &b);

   sum = add(a,b);

   printf("Sum = %d\n",sum);

   return 0;

}
