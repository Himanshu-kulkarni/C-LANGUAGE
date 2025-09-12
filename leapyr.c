#include<stdio.h>

int main()
{
    int year;

    printf("LEAP YEAR CALCULATOR\n");
    printf("ENTER THE YEAR: ");
    scanf("%d", &year);

    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("the year %d is not a leap year", year);
        }
        else
        {
            printf("the year %d is not a leap year", year);
        }
    }
    else if (year%4==0)
    {
        printf("the year %d is leap year", year);
    }
    else{
        printf("the year %d is not leap year", year);
    }
return 0;
}