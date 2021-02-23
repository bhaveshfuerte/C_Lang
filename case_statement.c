#include <stdio.h>//ok
int main()
{
          int a,b,c,i;
          printf("enter Value Of A=:");
          scanf("%d",&a);
          printf("enter Value Of B-:");
          scanf("%d",&b);
          
        
if((a&&b))
{
          printf("<<<<<<<<<<<<<<<<<<<<<<\t 1. For Addition.>>>>>>>>>>>>>>>>>>>>>\n\n");
          printf("<<<<<<<<<<<<<<<<<<<<<<\t 2. For Addition.>>>>>>>>>>>>>>>>>>>>>\n\n");
          printf("<<<<<<<<<<<<<<<<<<<<<<\t 3. For Addition.>>>>>>>>>>>>>>>>>>>>>\n\n");
          printf("<<<<<<<<<<<<<<<<<<<<<<\t 4. For Addition.>>>>>>>>>>>>>>>>>>>>>\n\n");
          printf("Enter Your Input-:");
          scanf("%d",&i);
          
 }         
          
  if((a&&b)&i<=4)
          {
                   switch (i)
                   {
                             case 1:
                             c=a+b;
                             printf("Addition is %d",c);
                             break;
                   
                    
                             case 2:
                             c=a-b;
                             printf("Subtraction is %d",c);
                             break;
                   
                    
                             case 3:
                             c=a*b;
                             printf("Multiplication is %d",c);
                             break;
                   
                    
                             case 4:
                             c=a/b;
                             printf("Divition is %d",c);
                             break;
                   }
          }
        else if(!(a&&b))
          {
                   
                 printf("Please Enter Valid input in (A,B)");

          }
          else
             printf("<<<<<<<<<<<<<<<<<<<<<<<<<Enter The Value between 1 to 4.>>>>>>>>>>>>>>>>>>>>>>>>>>");
}