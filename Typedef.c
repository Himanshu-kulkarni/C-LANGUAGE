#include <stdio.h>

typedef char string[50];

int main()
{
    // typedef = reserved keyword that gives an existing data type a "nickname"
    //           helps simplifiy complex type and inproves code readability

    //           typedef existing_type new_name;

    string name = "Himanshu Kulkarni";
    printf("%s", name);

    return 0;
}