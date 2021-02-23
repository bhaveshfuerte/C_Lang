#include <stdio.h>
int func1(int array[])
{
            array[5]=55;
            array[0]=999;
          for (int i=0; i<=6; i++)
          {
                    printf("the value of array at %d is %d. \n",i,array[i]);
                    
          }
       printf("\n\n\n");
         
          return 0;
           
}
int func2(int *ptr)

{
         
          for(int i=0; i<=6;i++)
          {
                    printf("The Value at ptr %d is %d\n",i,*(ptr+i));
          }
           *(ptr+2)=5555;
           printf("\n\n\n");
}
int main()
{
          int arr[]={10,20,30,40,50,60,70};
           printf("the value of array at 0 is %d\n", arr[0]);
          printf("the value of array at 5 is %d\n\n\n",arr[5]);
         
          func1 (arr);
          func2 (arr);
           func2 (arr);
          return 0;
}