 #include<stdio.h>
 #include<string.h>

 int main()
{
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    char noun[50] = "";
    char verb[50] = "";

    printf("ENTER ADJECTIVE1: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1]= '\0';

    printf("ENTER ADJECTIVE2: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1]= '\0';

    printf("ENTER ADJECTIVE3: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1]= '\0';

    printf("ENTER NOUN: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1]= '\0';

    printf("ENTER VERB: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1]= '\0';

    printf("\nToday i went to a %s zoo\n", adjective1);
    printf("In an exhibition, I saw %s\n", noun);
    printf("%s was %s and %s\n", noun, adjective2, verb);
    printf("I was %s\n", adjective3);

    return 0;
    
}