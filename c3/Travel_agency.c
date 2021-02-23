#include <stdio.h>
struct Driver
{
          char name[34];
          char dlNo[45];
          char route[47];
          int kms;

};
int main()
{
          struct Driver d1,d2,d3;
          printf("Enter the details of Drivers\n");
          printf("Enter the Name of First Driver:\n");
          scanf("%s",&d1.name);
          printf("Enter the Driving Licence No:-\n");
          scanf("%s",&d1.dlNo);
          printf("Enter The Route of Driver:-\n");
          scanf("%s",&d1.route);
          printf("Enter the kilometer of driver:-\n");
          scanf("%s",&d1.kms);

          printf("Enter the Name of Second Driver:\n");
          scanf("%s",&d2.name);
          printf("Enter the Driving Licence No:-\n");
          scanf("%s",&d2.dlNo);
          printf("Enter The Route of Driver:-\n");
          scanf("%s",&d2.route);
          printf("Enter the kilometer of driver:-\n");
          scanf("%s",&d2.kms);

          printf("Enter the Name of Third Driver:\n");
          scanf("%s",&d3.name);
          printf("Enter the Driving Licence No:-\n");
          scanf("%s",&d3.dlNo);
          printf("Enter The Route of Driver:-\n");
          scanf("%s",&d3.route);
          printf("Enter the kilometer of driver:-\n");
          scanf("%s",&d3.kms);
          printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%Print The Information Of Drivers%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
          printf("For The Driver No 1:\n Name is %s.\n Licence No : %s.\n Driver Rout Is %s.\n Total Kilometre Is %s.\n\n\n",d1.name,d1.dlNo,d1.route,d1.kms);
          printf("For The Driver No 2:\n Name is %s.\n Licence No : %s.\n Driver Rout Is %s.\n Total Kilometre Is %s.\n\n\n",d1.name,d1.dlNo,d1.route,d1.kms);
          printf("For The Driver No 3:\n Name is %s.\n Licence No : %s.\n Driver Rout Is %s.\n Total Kilometre Is %s.\n\n\\n",d1.name,d1.dlNo,d1.route,d1.kms);
return 0;
}