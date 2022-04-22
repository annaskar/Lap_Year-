#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year ;

    printf("Enter a year");
    scanf("%d",&year);
    if(year%4!=0)
        {
        printf("Common year");
        return 0;
        }
     else if(year%100!=0)
       {
        printf("Leap year");
        return 0;
        }
     else if(year%400!=0)
        {
        printf("Common year");
        return 0;
        }

}
