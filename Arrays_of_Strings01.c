#include<stdio.h>
#include <string.h>

int main()
{
    //EXERCISE

    char names[4][25] = {"0"};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0;i < rows; i++)
    {
        printf("%s ", names[i]);
    }

return 0;
}