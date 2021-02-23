#include<stdio.h>
int takenumber()
{
          int i;
          printf("Enter a number");
          scanf("%d",&i);
          return i;
}
int main()
{
          int a,b,c;
          a=9;
          b=10;
          c = takenumber();
          printf("The Value Of C is %d",c);
          
}