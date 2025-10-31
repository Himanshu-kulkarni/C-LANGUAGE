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
    
    
    
    /*
    car car1 = {"mustang", 2025, 30000};
    car car2 = {"Corvette", 2026, 60000};
    car car3 = {"Challenger", 2020, 40000};

    printf("%s %d $%d\n", car1.model, car1.year, car1.price);
    printf("%s %d $%d\n", car2.model, car2.year, car2.price);
    printf("%s %d $%d\n", car3.model, car3.year, car3.price);
    */



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