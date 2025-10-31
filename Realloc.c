#include<stdio.h>
#include<stdlib.h>

int main()
{
    // realloc() = reallocation.
    //             resize previously allocated memory
    //             realloc(ptr, bytes)

    int number = 0;
    printf("ENTER THE NUMBER OF PRICES: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("Memory Allocation failed");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    int newnumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newnumber);

    float *temp = realloc(prices, newnumber * sizeof(float));

    if(temp == NULL)
    {
        printf("could not reallocate memory");
    }
    else{
        prices = temp;
        temp = NULL;
        for(int i = number; i < newnumber; i++)
        {
            printf("Enter price #%d: ", i+1);
            scanf("%f", &prices[i]);
        }

        for(int i = 0; i < newnumber; i++)
        {
            printf("%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}