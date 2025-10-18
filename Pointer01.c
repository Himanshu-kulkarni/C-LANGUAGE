#include<stdio.h>

void Birthday(int *age);

int main()
{
    // pointer = A variable that stores the memory address of another variable.
    //           Benefit: They help avoid wasting memory by allowing you to pass
    //           the address of a large data structures instead of copying the entire data.

    int age = 18;
    int *pAge = &age; // * = deference operator

    Birthday(pAge);

    printf("You are %d years old", age);

    return 0;
}

void Birthday(int *age){
    // pass by reference
    (*age)++;
}