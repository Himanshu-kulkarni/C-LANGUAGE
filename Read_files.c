#include <stdio.h>

int main()
{
    // read files

    FILE *pFile = fopen("C:\\Users\\Himanshu\\Desktop\\input.txt", "r");
    char buffer[1024] = {0};

    if(pFile == NULL)
    {
        printf("Could not open file");
        return 1;
    }

    while(fgets( buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}