#include <stdio.h>
void main ()
{
int big;
int small;
int goal; 
printf("enter the values in big \n");
scanf("%d",&big);
printf("enter the value in small \n");
scanf("%d",&small);
printf("enter the value in goal\n");
scanf ("%d",&goal);
int required=goal/5;
if (required<=big)
{
    int remain=goal-(required *5);
    if (remain<=small)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
else
{
        int remain =goal-(big*5);
        if (remain<=small)
        {
            printf("true");
        }
        else
    
    {
    printf("false");
}
}
}