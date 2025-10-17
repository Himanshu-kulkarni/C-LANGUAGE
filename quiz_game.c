#include<stdio.h>

int main()
{
    char questions[][100] = {"Who was the first human to discover that Light Yagami was Kira?",
                             "Who killed Frieza for good in Dragon Ball Z (before Super brought him back)?",
                             "What is the name of the island where Luffy first met Zoro?",
                             "What are the colors of Tanjiro Kamado's Nichirin sword when he first gets it?",
                             "What is Ash's strongest Pokemon in the Pokemon XYZ anime series?"};

    char options[][100] = {"A) L \nB) Misa Amane \nC) Near \nD) Ryuk",
                           "A) Goku \nB) Trunks \nC) Vegeta \nD) Piccolo",
                           "A) Loguetown \nB) Foosha Village \nC) Shells Town \nD) Dressrosa",
                           "A) Blue \nB) Red \nC) Black \nD) Green",
                           "A) Pikachu \nB) Charizard \nC) Greninja \nD) Sceptile"};

    char answerkey[] = {'A', 'B', 'C', 'C', 'C'};

    int questioncount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** WELCOME TO THE ANIME QUIZ ***\n\n");

    for(int i = 0; i < questioncount; i++)
    {
        printf("Q%d %s\n", (i+1), questions[i]);
        printf("%s\n\n", options[i]);
        printf("Enter your answer: ");
        scanf(" %c", &guess);

        if(guess == answerkey[i])
        {
            printf("Correct\n\n");
            score++;
        }
        else
        {
            printf("Incorrect\n\n");
        }
    }

    printf("you completed the quize with score of %d/%d", score, questioncount);

return 0;
}