#include <stdio.h>

int main()
{
  int i;

  while (1)
  {
    printf("Enter 1 to 9 to print pattern OR Press 10 for Quit:\n");

    scanf("%d", &i);

    if (i < 11)
    {

      switch (i)
      {
      case 1:
      {
        printf("     *           \n   * *          \n *   *          \n     *          \n     *         \n     *         \n     *         \n     *          \n *********           \n");

        break;
      }
      case 2:
      {

        printf("       * * *    \n    *        *    \n    *        *   \n             *   \n           *   \n        *   \n    *            \n    *  *  *  *              \n");

        break;
      }
         case 3:
      {

        printf("*  *  *  *  *\n         *\n       *\n    *  *\n          *\n           *\n           *\n          *\n*  *  *  *  \n");

        break;
      }
      case 4:
      {
        printf("           *\n         * *\n       *   *\n     *     *\n   *       *\n *         *\n* * * * * * * * \n           *\n           *\n");
        break;
      }
      case 5:
      {
        
         printf("* * * * * *\n*\n*\n*\n* * * * * * \n          *\n          *\n          *\n* * * * * * \n");
         break;
      }
      case 6:
      {
        printf("* * * * * * *\n*\n*\n*\n*\n*   * * * * * \n*           *\n*           *\n*           *\n*           *\n* * * * * * * \n");
        break;
      }
      case 7:
      {
         printf("  *  *  *  *  * \n            *\n           *\n          *\n         * \n        *\n       *\n      *\n     *\n");
         break;
      }
      case 8:
      {
           printf(" * * * * * * * \n*             *\n*             *\n*             *\n*             *\n* * * * * * * *\n*             *\n*             *\n*             *\n*             *\n * * * * * * * \n");
        break;
      }
      case 9:
      {
         printf(" * * * * * * * \n*             *\n*             *\n*             *\n*             *\n* * * * * * * *\n              *\n              *\n              *\n              *\n* * * * * * * * ");
        break;
      }
      case 10:
      {
        printf("LOG OUT Please Wait.....\n");
        goto end;
        break;
      }
      default:
      {
        break;
      }
      }
    }
    else
    {
      printf("Enter Valid No 1 to 10");
    }
  }
end:
printf("Quiting The Program..............");
  return 0;
}