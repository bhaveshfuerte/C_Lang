#include <stdio.h>
int main()
{
         int a,i=0,j;
          printf("enter number of N-:");
          scanf("%d",&a);
          do
          {
                    i++;
                    j =  a * i ;
                   printf("%d * %d = %d \n",a,i,j); 

          }
          while(i<=9);
          

}