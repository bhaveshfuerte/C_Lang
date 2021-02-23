#include <stdio.h>
int main()
{
          int age;
          printf("Enter Your Age:-");
          scanf("%d",&age);
          printf("Your Age is %d \n",age);
          if (age>=18)
          {
                    printf("you are Eligible For Vote,\nBecause ur Age is %d.\nAnd, It is 18 Plus. \n",age);
          }
          else
          {
                    printf("You are not Eligible For Vote,\nBecause Your Age is %d.\nAnd It is under 18.",age);
          }
          
}