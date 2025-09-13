#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool isRunning = true;
    char response = '\0';

    while(isRunning)
    {
        printf("you are playing a game\n");
        printf("Continue or not (y,n)");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    }

    printf("game exited");

return 0;
}