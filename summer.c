#include <stdio.h>

void main() 
{
    int summer;
    int temperature;
    printf("enter the temperature\n");
    scanf("%d",&temperature);
    printf("enter 1 for summer\t 0 for not summer\n");
    scanf("%d",&summer);
   if(summer==1)
   {
       if(temperature>=60&&temperature<=100)
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
       if(temperature>=60&&temperature<=90)
       {
           printf("true\n");
       }
   else
   {
       printf("false\n");
   }
   }}