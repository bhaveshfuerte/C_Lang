#include <stdio.h>
void bhavesh(int);
void gorad(int);

int main()
{
          int n;
          printf("Input Number For Line:------\n");
          scanf("%d",&n);
          bhavesh(n);
          bhavesh(n);
          gorad(n);

          return(0);



}
void bhavesh(int n)
{
          int i,j;
          for ( i = 1; i <= n; i++)
          {
                    for ( j = 0; j <=n-i; j++)
                    {
                              printf(" ");
                    }
                    for ( j = 1; j <=2*i-1 ; j++)
                    {
                             printf("*");
                    }
                    printf("\n");
                    
          }
          
}
void gorad(int n)
{
          int i,j;
          for(i=1;i<n;i++)
          {
                    for ( j=1; j<=n-1 ; j++ )
                    {
                              printf(" ");
                    }
                    printf("***\n");
          }
}