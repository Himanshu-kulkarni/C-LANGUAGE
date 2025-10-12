#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // Number guesing game

    srand(time(NULL));


    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = rand() % (max - min + 1) + 1;

    printf("$$$ Number Guessing Game $$$\n");

    do{
        printf("Enter a number from 1 - 100: ");
        scanf("%d", &guess);
        tries++;

        if(guess < answer)
        {
            printf("too low\n");
        }
        else if(guess > answer)
        {
            printf("Too High\n");
        }
        else
        {
            printf("\nHurray you got it right\nthe answer %d is correct\n", answer);
        }
    }while(guess != answer);

    printf("it took you only %d tries to get it right\n\n", tries);


return 0;
}