#include <stdio.h>

int main()
{
          int rows;
          int m;
          
          

          while (1)
          {
                    printf("press 1 For Continue....");
          printf("press 2 For Quit....\n");
                    scanf("%d", &m);
                    switch (m)
                    {
                    case 1:
                    {
                              printf("How many rows DO u Want To Print::----");
                              scanf("%d", &rows);

                              for (int i = 0; i < rows; i++)
                              {
                                        printf("\n");

                                        for (int j = 0; j <= i; j++)
                                        {
                                                  printf("*");
                                        }
                              }
                              printf("\n");

                          

                              break;
                    }
                    case 2:
                    {
                              printf("LOG OUT Please Wait.....");
                              goto end;
                              break;
                    }
                    default:
                    printf("Enter 1 or 2\n");
                              break;
                    }
          }
end:
          return 0;
}