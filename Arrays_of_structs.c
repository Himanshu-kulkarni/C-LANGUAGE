#include<stdio.h>

typedef struct{
    char model[30];
    int year;
    int price;
}car;

int main()
{
    // Array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups together related data

    car cars[] = {{"mustang", 2025, 30000}, 
                  {"Corvette", 2026, 60000},
                  {"Challenger", 2020, 40000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++)
    {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}