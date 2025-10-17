#include <stdio.h>

typedef enum{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;

int main()
{
    // enum = a user defined data type that consists of a set of named integer constants.
    //        Benefit: replaces numbers with readable names

    Day today = TUESDAY;

    if(today == SUNDAY || today == SATURDAY)
    {
        printf("Its weekend");
    }
    else{
        printf("its weekday");
    }

    return 0;
}