#include <stdio.h>

void main() 
{
    int weekend;
    int cigars;
    printf("enter the cigars\n");
    scanf("%d",&cigars);
    printf("enter 1 for weekend\t 0 for not weekend\n");
    scanf("%d",&weekend);
   if(weekend==1)
   {
       if(cigars>=40)
       {
           printf("true\n");
       }
       else
   {
       printf("false\n");
   }
   }
   else
   {
       if(cigars>=40&&cigars<=60)
       {
           printf("true\n");
       }
   else
   {
       printf("false\n");
   }
   }}