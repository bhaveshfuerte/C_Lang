#include <stdio.h>
#include <string.h>
union Student
{
          int id;
          int marks;
          char fav_char;
          char name[30];
          
};
int main()
{
          union Student s1;
          strcpy(s1.name,"Harry");
          s1.marks = 345;
          s1.id = 1;
          s1.fav_char = 'N';
          printf("the id  is %d\n",s1.id);
          printf("the marks is %d\n",s1.marks);
          printf("the fav_char is %c\n",s1.fav_char);
          printf("the name is %s\n",s1.name); 
          return 0;
}