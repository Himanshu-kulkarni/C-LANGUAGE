#include <stdio.h>

int main()
{
    int age=0;
    float cgpa= 1.0f;
    // float cgpa= 1.0; // this is also valid, but using 'f' is more explicit for float type
    char grade='A';
    char name[30]="himanshu kulkarni";

    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);

    printf("ENTER YOUR CGPA: ");
    scanf("%f", &cgpa);

    printf("ENTER YOUR GRADE: ");
    scanf(" %c", &grade);


    //printf("ENTER YOUR FIRST NAME: ");
    //scanf("%s", &name);
    // scanf can not read strings with spaces, it will stop at the first space
    // to read a string with spaces, you can use fgets or gets (not recommended)


    getchar(); // to consume the newline character left by scanf
    // fgets is safer than gets, as it limits the number of characters read
    // gets is unsafe and can cause buffer overflow, so it is not recommended


    printf("ENTER YOUR NAME: ");
    fgets(name, 30, stdin);
    // fgets(name, sizeof(name), stdin); // this is another way to use fgets
    // fgets reads a line from the input and stores it in the string
    // it stops reading when it encounters a newline character or reaches the specified size
    // it also includes the newline character in the string, so you may want to remove it later
    // fgets reads a line from the input and stores it in the string
    // it stops reading when it encounters a newline character or reaches the specified size
    // it also includes the newline character in the string, so you may want to remove it later


    printf("%d\n", age);
    printf("%f\n", cgpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
    /*
    This program demonstrates how to take user input for various data types
    and print them out. It uses scanf for reading integers, floats, characters,
    and strings. The fgets function is used to read strings with spaces.
    */

}