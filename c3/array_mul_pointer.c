#include <stdio.h>
int func1(int array[])
{
}
void func(int arr[2][2])
{
          
          
          for (int i = 0; i < 2; i++)
          {
                    for(int j =0; j<2; j++)
                    {
                              printf("value at %d ,%d is %d\n",i,j, arr[i][j]);
                    }
          }
          
}
int main()
{
         
          int arr[2][2]={{10,20},{10,5}};
          func(arr); 
         
          
          
}