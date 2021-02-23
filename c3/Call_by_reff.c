#include <stdio.h>
void swap(int *x, int *y)
{
          int temp;
          temp= *x;
          *x=*y;
          *y = temp;
          return;
}
int main()
{

          int a , b;
          printf(".............Enter The value of a............. \n");
          scanf("%d",&a);
          printf(".............Enter the value of b............. \n");
          scanf("%d",&b);
          printf("%d*******************************\n");
          printf("val of a = %d and val of b = %d.\n *******************************\n",a,b);
          swap(&a,&b);
          printf("After Swap val of a = %d and val of b = %d.\n *******************************",a,b);
          return 0;

}