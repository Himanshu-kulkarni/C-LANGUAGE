#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct{
    char name[50];
    int age;
    float cgpa;
    bool isFulltime;
}Student;

void printStudent(Student student);

int main()
{

    // struct = A custom container that holds multiple
    //          pieces of related information.
    //          similar to objects in other languages

    Student student1 = {"Himanshu Kulkarni", 18, 5.0, true};
    Student student2 = {0};

    //to fill information of student 2
    strcpy(student2.name, "KAKAROT");
    student2.age = 45;
    student2.cgpa = 1.0;
    student2.isFulltime = false;

    /*
    // to print about student 1
    printf("\n%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.cgpa);
    printf("%s\n", (student1.isFulltime) ? "Yes" : "No");
    */
    printStudent(student1);

    /*
    //to print about student 2
    printf("\n%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.cgpa);
    printf("%s\n", (student2.isFulltime) ? "Yes" : "No");
    */
    printStudent(student2);


    return 0;
}

void printStudent(Student student){
    printf("\nName : %s\n", student.name);
    printf("Age : %d\n", student.age);
    printf("CGPA : %.2f\n", student.cgpa);
    printf("Is full time? : %s\n", (student.isFulltime) ? "Yes" : "No");
}