#include <stdio.h>
#include <stdbool.h>

int main()
{
    // variable : A reusable container for a value
    //            behaves as if it were the value it contains

    int age = 18;
    // an integer variable can hold a whole number
    // it can be positive or negative
    // it can hold values from -2,147,483,648 to 2,147,483,647
    // it is used for counting and indexing

    float height = 1.75;
    // a float variable can hold a value with decimal places
    // it is used for measurements and calculations
    // a float variable can hold up to 7 decimal places
    // it is used for less precise calculations

    double pie = 3.141599876543456789;
    double e = 2.718281828459045235;
    // a double variable can hold a value with more precision than a float variable
    // it is used for more precise calculations
    // a double variable can hold up to 15 decimal places
    // while a float variable can hold up to 7 decimal places

    char grade = 'A';
    // you cannot add any mathematical syllables to a char variable
    // it is just a single character
    // simmilarly you can use any symbol like @#$%! in the char variable

    char name[] = "Himanshu Kulkarni";
    char email[] = "fake2407@gmail.com";
    // a string is an array of characters
    // it is used to store text
    // a string can hold multiple characters
    // it is terminated by a null character '\0'
    // a string can hold up to 255 characters
    // it is used for storing names, emails, etc.

    bool isonline = false;
    bool isStudent = true;
    // a boolean variable can hold only two values: true or false
    // it is used for logical operations and conditions
    // it is used to check if a condition is true or false


    // printing the values of the variables

    printf("you are %d years old\n", age);
    printf("your height is: %.2f meters\n", height);
    printf("the value of pie =%.17lf\n", pie);
    printf("the value of e =%.15lf\n", e);
    printf("YOUR GRADE IS: %c+\n", grade);
    printf("YOUR NAME IS: %s\n", name);
    printf("YOUR EMAIL IS: %s\n", email);
    
    if (isonline)
    {
        printf("You are online\n");
    }
    else
    {
        printf("You are offline\n");
    }

    if (isStudent)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are not a student\n");
    }
    
    
    // the return statement is used to return a value from the function

    return 0; 

}