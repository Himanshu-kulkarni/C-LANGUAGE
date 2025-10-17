#include<stdio.h>

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char name[] = "Himanshu Kulkarni";

    int size = sizeof(numbers)/sizeof(numbers[0]);
    // size of function tells us the size of array in bytes, and if we divide the size of array by size 
    // the size of an element of an array, we get number of elements...

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }



return 0;
}