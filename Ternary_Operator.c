#include<stdio.h>

int main()
{
    // ternary operator ? = shorthand for if else statements
    // condition ? value_if_true : value_if_false;

    /*
    int number = 9;

    printf("%d is %s", number, (number % 2 == 0) ? "EVEN" : "ODD");
    */

    int hours = 11;
    int minutes = 11;

    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM");

return 0;
}