#include <stdio.h>
void swap(int *x, int *y)
{
          
          int temp1 = (*x + *y);
         
          int temp2 = (*x-*y);
          
          

          *x = temp1;
          *y = temp2;
          return;
           
}
void swap2(int *x, int *y)
{
          int temp1 = *x;
          *x = *y;
          *y = temp1;
          return;
}
int main()
{

          int a , b;
          printf(".............Enter The value of a............. \n");
          scanf("%d",&a);
          printf(".............Enter the value of b............. \n");
          scanf("%d",&b);
          printf("*******************************\n");
          printf("val of a = %d and val of b = %d.\n *******************************\n",a,b);
          swap(&a,&b);
          printf("Addition of A and B = %d \n",a);
          printf("now a = %d\n *******************************\n",a);
           printf("Substraction of A and B = %d \n",b);
          printf("now b = %d\n *******************************\n",b);
          printf("*******************************\n");
           swap2(&a,&b);
           printf("After swaping val of A = %d And val of B = %d ", a, b);
          return 0;

}