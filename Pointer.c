#include<stdio.h>

int main()
{
    // pointer = A variable that stores the memory address of another variable.
    //           Benefit: They help avoid wasting memory by allowing you to pass
    //           the address of a large data structures instead of copying the entire data.

    int age = 18;
    int *pAge = &age; // * = deference operator

    printf("%p\n", &age); // %p is used to print a pointer address
    printf("%p\n", pAge);

    return 0;
}