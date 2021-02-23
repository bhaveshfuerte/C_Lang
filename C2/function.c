#include<stdio.h>
   

int sum(int a, int b)
{
          return a + b;
}
int div(int a, int b);
int main()
{
          int a,b,c;
          a=10;
          b=20;

          c=sum(a,b);
          printf("This sum is %d\n",c);
          c=div(a,b);
          printf("The mul is %d",c);
          return 0;
}
int div(int a, int b)
{
          return a * b;
}