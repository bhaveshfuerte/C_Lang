#include <stdio.h>

int main()
{
          char input;
          float kmsToMiles = 0.621371;
          float inchesToFoot = 0.0833333;
          float cmsToInches = 0.393701;
          float poundToKgs = 0.453592;
          float inchesToMeters = 0.0254;
          float first, second;

          while (1)
          {
                    printf("Enter the input characterv Q to quit \n           1. kms to miles.\n           2. inchees to float. \n           3. cms to inchers.\n           4. pound to kg. \n           5. inches to meter\n" );
                    scanf(" %c",&input);
                    switch (input)
                    {
                    case 'q':
                    printf("LOG OUT Please Wait.....");
                    goto end;
                              break;
                    case '1':
                    {
                              printf("enter quality of you want to convert\n");
                              scanf("%f",&first);

                              second=first* kmsToMiles;
                              printf("%f kms is eqal to %f miles.\n",first,second);

                              break;
                    }
                     case '2':
                    {
                              printf("enter quality of you want to convert\n");
                              scanf("%f",&first);

                              second=first* inchesToFoot;
                              printf("%f Inchies is eqal to %f Foot.\n\n",first,second);

                              break;
                    }
                     case '3':
                    {
                              printf("enter quality of you want to convert\n");
                              scanf("%f",&first);

                              second=first* cmsToInches;
                              printf("%f cms  is eqal to %f inchies.\n",first,second);

                              break;
                    }
                     case '4':
                    {
                              printf("enter quality of you want to convert\n");
                              scanf("%f",&first);

                              second=first*poundToKgs;
                              printf("%f pounds is eqal to %f kgs.\n",first,second);

                              break;
                    }
                     case '5':
                    {
                              printf("enter quality of you want to convert\n");
                              scanf("%f",&first);

                              second=first*inchesToMeters;
                              printf("%f Inchies is eqal to %f meters.\n\n",first,second);

                              break;
                    }
                    
                    default:
                              break;
                    }
          }
          end:
          return 0;

         

}