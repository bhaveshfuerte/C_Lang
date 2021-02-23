#include <stdio.h>
void days_30(int, char);
void days_31(int, char);
void days_28(int, char);
void gorad(int, char);

int main()
{
          int p = 15;
          int n = 5;
          char c[p];

          int k;
          int l;

          while (1)
          {
                    printf("Enter Month To See Calander 2021:::::::--");
                    scanf("%d", &l);
                    if (l == 13)
                    {
                              printf("Program Exit. \nThankyou...... ");
                              goto end;
                    }
                    else
                    {
                              switch (l)
                              {
                              case 1:
                              {
                                        c[p] = 'J';
                                   
                                        gorad(n, c[p]);
                                             days_31(n, c[p]);
                                        break;
                              }
                              case 2:
                              {
                                        c[p] = 'F';
                                           gorad(n, c[p]);
                                        days_28(n, c[p]);
                                     
                                        break;
                              }
                              case 3:
                              {
                                        c[p] = 'M';
                                         gorad(n, c[p]);
                                        days_31(n, c[p]);
                                       
                                        break;
                              }
                              case 4:
                              {
                                        c[p] = 'A';
                                          gorad(n, c[p]);
                                        days_30(n, c[p]);
                                      
                                        break;
                              }
                              case 5:
                              {
                                        c[p] = 'M';
                                        gorad(n, c[p]);
                                        days_31(n, c[p]);
                                        
                                        break;
                              }
                              case 6:
                              {
                                        c[p] = 'J';
                                         gorad(n, c[p]);
                                        days_30(n, c[p]);
                                       
                                        break;
                              }
                              case 7:
                              {
                                        c[p] = 'J';
                                         gorad(n, c[p]);
                                        days_31(n, c[p]);
                                       
                                        break;
                              }
                              case 8:
                              {
                                        c[p] = 'A';
                                        gorad(n, c[p]);
                                        days_31(n, c[p]);
                                        
                                        break;
                              }
                              case 9:
                              {
                                        c[p] = 'S';
                                         gorad(n, c[p]);
                                        days_30(n, c[p]);
                                       
                                        break;
                              }
                              case 10:
                              {
                                        c[p] = 'O';
                                        gorad(n, c[p]);
                                        days_31(n, c[p]);
                                        
                                        break;
                              }
                              case 11:
                              {
                                        c[p] = 'N';
                                         gorad(n, c[p]);
                                        days_30(n, c[p]);
                                       
                                        break;
                              }
                              case 12:
                              {
                                        c[p] = 'D';
                                          gorad(n, c[p]);
                                        days_31(n, c[p]);
                                      
                                        break;
                              }
                              default:
                                        break;
                              }

                              printf("----------------------------------------Enter 13 To Exit------------------------------------------\n");
                    }
          }
end:
{
          return (0);
}
}

void days_30(int n, char s)
{
          int i, j,k;
          printf("******%c%c%c%c%c\n",s,s,s,s,s);
          for (i = n; i >= 1; --i)
          {

                    for (k = 0; k <= n - i; ++k)
                    {
                              printf(" ");
                    }
                    for (j = i; j <= 2 * i - 1; ++j)
                    {
                              printf("%c", s);
                    }
                    for (j = 0; j < i - 1; ++j)
                              printf("%c",s);

                    printf("\n");
          }
       
}
void days_28(int n, char s)
{
          int i, j,k;
           printf("********%c%c%c\n",s,s,s);
          for (i = n; i >= 1; --i)
          {

                    for (k = 0; k <= n - i; ++k)
                    {
                              printf(" ");
                    }
                    for (j = i; j <= 2 * i - 1; ++j)
                    {
                              printf("%c", s);
                    }
                    for (j = 0; j < i - 1; ++j)
                              printf("%c",s);

                    printf("\n");
          }
}
void days_31(int n, char s)
{ int i, j,k;
   printf("*****%c%c%c%c%c%c\n",s ,s ,s ,s,s,s);
          for (i = n; i >= 1; --i)
          {

                    for (k = 0; k <= n - i; ++k)
                    {
                              printf(" ");
                    }
                    for (j = i; j <= 2 * i - 1; ++j)
                    {
                              printf("%c", s);
                    }
                    for (j = 0; j < i - 1; ++j)
                              printf("%c",s);

                    printf("\n");
          }
}
void gorad(int n, char s)
{
          int i, j;
          for (i = 1; i < n; i++)
          {
                    for (j = 1; j <= n - 1; j++)
                    {
                              printf(" ");
                    }
                    printf("%c%c%c\n", s, s, s);
          }
}
