#include<stdio.h>

int main()
{
    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("WEIGHT CONVERSION PROGRAM\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilogram\n");
    printf("ENTER YOU CHOICE (1) or (2)\n");
    scanf(" %d", &choice);

    if(choice == 1){
        printf("ENTER THE WEIGHT IN KILOGRAMS: ");
        scanf(" %f", &kilograms);

        pounds = kilograms*2.20462;

        printf("THE WEIGHT IN POUNDS IS: %f", pounds);
    }
    else if(choice == 2){
        printf("ENTER THE WEIGHT IN POUNDS: ");
        scanf(" %f", &pounds);

        kilograms = pounds/2.20462;

        printf("THE WEIGHT IN KILOGRAMS IS: %f", kilograms);
    }
    else{
        printf("BHOSADIKE PADHNE KO NHI ATTA KYA?");
    }

    return 0;
}