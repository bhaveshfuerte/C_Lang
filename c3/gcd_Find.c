#include<stdio.h>
int find_GCD(int m,int n);
void main()
{
          int n1, n2,gcd;
          scanf("%,%",&n1,&n2);
          gcd = find_GCD(n1,&n1);
          printf("GCD of %d and %d is %d",n1,n2,gcd);

}
int find_GCD(int m,int n)
{
          int gcdVal;
          if(n>m)
          {
                    gcdVal=find_GCD(n,m);
          }
          else if(n==0)
          {
                    gcdVal = m;
          }
          else
          {
                    gcdVal = find_GCD(n,m%n);
          }
          return(gcdVal);
}