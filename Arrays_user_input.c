#include<stdio.h>

int main()
{

    int scores[5] = {0};
    int size = sizeof(scores)/sizeof(scores[0]);

    for(int i = 0; i < 5; i++)
    {
        printf("ENTER A SCORE: ");
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }

return 0;
}