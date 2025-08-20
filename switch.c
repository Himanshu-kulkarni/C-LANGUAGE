#include<stdio.h>

int main()
{
    /*int dayofweek;
    printf("ENTER A DAY OF THE WEEK(1-7) ");
    scanf("%d", &dayofweek);

    switch(dayofweek){
        case 1:
            printf("Today is Monday");
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("Today is Wednesday");
            break;
        case 4:
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        case 7:
            printf("Today is Sunday");
            break;
        default :
            printf("PLEASE ENTER NUMBER ONLY FROM (1-7)");
    }*/

    char dayofweek;
    printf("ENTER A DAY OF THE WEEK(M,T,W,D,F,S,X) ");
    scanf("%c", &dayofweek);

    switch(dayofweek){
        case 'M':
            printf("Today is Monday");
            break;
        case 'T':
            printf("Today is Tuesday");
            break;
        case 'W':
            printf("Today is Wednesday");
            break;
        case 'D':
            printf("Today is Thursday");
            break;
        case 'F':
            printf("Today is Friday");
            break;
        case 'S':
            printf("Today is Saturday");
            break;
        case 'X':
            printf("Today is Sunday");
            break;
        default :
            printf("PLEASE ENTER NUMBER ONLY FROM (1-7)");
    }

    return 0;
}
