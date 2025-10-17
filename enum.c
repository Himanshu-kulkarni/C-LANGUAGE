#include <stdio.h>

enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main()
{
    // enum = a user defined data type that consists of a set of named integer constants.
    //        Benefit: replaces numbers with readable names

    enum Day today = SUNDAY;

    printf("%d", today);

    return 0;
}