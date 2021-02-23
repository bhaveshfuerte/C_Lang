#include <stdio.h>
void days_30(int);
void days_31(int);
void days_28(int);
void gorad(int);

int main()
{
          int n = 5;
          int k;
          int l;
        
          for(l=0;l<=12;l++)
          {
                     
                            
                  
                    {
                              switch (l)
                              {
                              case 1:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 2:
                              {
                                        days_28(n);
                                        break;
                              }
                              case 3:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 4:
                              {
                                        days_30(n);
                                        break;
                              }
                              case 5:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 6:
                              {
                                        days_30(n);
                                        break;
                              }
                              case 7:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 8:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 9:
                              {
                                        days_30(n);
                                        break;
                              }
                              case 10:
                              {
                                        days_31(n);
                                        break;
                              }
                              case 11:
                              {
                                        days_30(n);
                                        break;
                              }
                              case 12:
                              {
                                        days_31(n);
                                        break;
                              }
                              default:
                                        break;
                              }

                             
                             // printf("----------------------------------------Enter 13 To Exit------------------------------------------\n");
                    }
                   
          }
  gorad(n);
}

void days_30(int n)
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
                              printf("*");
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("*****");
          }
          printf("\n");
}
void days_28(int n)
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
                              printf("*");
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("***");
          }
          printf("\n");
}
void days_31(int n)
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
                              printf("*");
                    }

                    printf("\n");
          }
          for (j = 6; j <= 6; j++)
          {
                    printf("******");
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
