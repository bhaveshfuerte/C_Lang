#include <stdio.h>
void days_30(int,char);
void days_31(int,char);
void days_28(int,char);
void gorad(int);

int main()
{
          int p=15;
           int n = 5;
           char c[p];        
           
          
          int k;
          int l;
        
          for(l=0;l<=12;l++)
          {
                            
                 
          
                    {
                              switch (l)
                              {
                              case 1:
                              {         c[p]='J';
                                        days_31(n,c[p]);
                                          
                                        break;
                              }
                              case 2:
                              {
                                        c[p]='F';
                                        days_28(n,c[p]);
                                        
                                        break;
                              }
                              case 3:
                              {
                                         c[p]='M';
                                        days_31(n,c[p]);
                                         
                                        break;
                              }
                              case 4:
                              {
                                         c[p]='A';
                                        days_30(n,c[p]);
                                       
                                        break;
                              }
                              case 5:
                              {
                                         c[p]='M';
                                        days_31(n,c[p]);
                                          
                                        break;
                              }
                              case 6:
                              {
                                         c[p]='J';
                                        days_30(n,c[p]);
                                         
                                        break;
                              }
                              case 7:
                              {
                                         c[p]='J';
                                        days_31(n,c[p]);
                                        
                                        break;
                              }
                              case 8:
                              {
                                         c[p]='A';
                                        days_31(n,c[p]);
                                         
                                        break;
                              }
                              case 9:
                              {
                                         c[p]='S';
                                        days_30(n,c[p]);
                                       
                                        break;
                              }
                              case 10:
                              {
                                         c[p]='O';
                                        days_31(n,c[p]);
                                          
                                        break;
                              }
                              case 11:
                              {
                                         c[p]='N';
                                        days_30(n,c[p]);
                                        
                                        break;
                              }
                              case 12:
                              {
                                         c[p]='D';
                                        days_31(n, c[p]);
                                       
                                        break;
                              }
                              default:
                                        break;
                              }

                              
                            
                             
                    } 
          }gorad(n);

}

void days_30(int n,char s)
{
          int i, j;
          for (i = 1; i <= n; i++)
          {

                    for (j = 0; j <= n - i; j++)
                    {
                              printf(" ");
                    }
                    for (j = 1; j <= 2 * i - 1; j++)
                    {
                              printf("%c",s);
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("%c%c%c%c%c******",s,s,s,s,s);
          }
          printf("\n");
          
}
void days_28(int n,char s)
{
          int i, j;
          for (i = 1; i <= n; i++)
          {

                    for (j = 0; j <= n - i; j++)
                    {
                              printf(" ");
                    }
                    for (j = 1; j <= 2 * i - 1; j++)
                    {
                              printf("%c",s);
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("%c%c%c********",s,s,s);
          }
          printf("\n");
}
void days_31(int n,char s)
{
          int i, j;
          for (i = 1; i <= n; i++)
          {

                    for (j = 0; j <= n - i; j++)
                    {
                              printf(" ");
                    }
                    for (j = 1; j <= 2 * i - 1; j++)
                    {
                              printf("%c",s);
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("%c%c%c%c%c%c*****",s ,s ,s ,s,s,s);
          }
          printf("\n");
}
void gorad(int n)
{
          int i, j;
          for (i = 1; i < n; i++)
          {
                    for (j = 1; j <= n - 1; j++)
                    {
                              printf(" ");
                    }
                    printf("***\n");
          }
}
