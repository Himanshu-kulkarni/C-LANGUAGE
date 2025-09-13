#include<stdio.h>
#include<string.h>

int main()
{ 
    char name[50]= "";

    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name) == 0){
        printf("name cannot be empty, Enter Your Name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("hello %s", name);

return 0;
}