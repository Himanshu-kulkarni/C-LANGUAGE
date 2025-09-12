#include<stdio.h>
#include<windows.h> // for windows
#include<unistd.h> // for mac/linux

int main()
{
    //for loop = repeat some code for limited # of times
    //           for (initialisation; condition; update)

    for(int i = 10; i >= 0; i--)
    {
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("Happy birthday");

return 0;
}