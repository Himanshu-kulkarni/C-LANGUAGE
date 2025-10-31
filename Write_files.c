#include <stdio.h>

int main()
{

    // WRITE A FILE

    FILE *pFile = fopen("C:\\Users\\Himanshu\\Desktop\\output.txt", "w");

    char text[] = "hello everyone how are you \nWelcome to the real world";

    if(pFile == NULL)
    {
        printf("ERROR OPENING FILE\n");

        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written");

    fclose(pFile);

    return 0;
}