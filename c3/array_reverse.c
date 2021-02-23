#include <stdio.h>
void arrayRev(int abc[])
{
          int temp;
          for (int i = 0; i < 9/2; i++)
          {
                   temp = abc[i];
                   abc[i]=abc[9-i];
                   abc[9-i]=temp;
                    

          }
          

}

int main()
{
          int arr[]={1,2,3,4,5,9,8,15,26,46};
          printf("before reverse an array\n");
          for (int i = 0; i <=9; i++)
          {
                    printf("the value of array %d is %d \n",i,arr[i]);
          }
           printf("\n\n");
          arrayRev(arr);
          printf("after rerversing arry\n");
         
          for (int i = 0; i <= 9; i++)
          {
                    printf("the value of element %d is %d \n",i,arr[i]);

          }
          
          

          return 0;
}