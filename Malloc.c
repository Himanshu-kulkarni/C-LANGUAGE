#include<stdio.h>
#include<stdlib.h>

int main()
{
    // malloc = A function in c that  dynamically allocates
    //          a specified number of bytes in memory

    int number = 0;
    printf("enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades);// returing "rented" space back to the os
    grades = NULL; // avoids dangaling pointers

    return 0;
}