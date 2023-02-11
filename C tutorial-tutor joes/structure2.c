#include<stdio.h>

typedef struct student2
{
    char *name;
    int age;
    float per;
}stu2;

int main(int argc, char const *argv[])
{
    stu2 obj = {"Abishek",34,78.5}; // accessing using pointer
    stu2 *ptr = &obj;

    //method 1
    printf("Name : %s",ptr->name);
    printf("\nAge : %d",ptr->age);
    printf("\nPercentage : %0.1f",ptr->per);

    // method 2
    printf("\n\nName : %s",(*ptr).name);
    printf("\nAge : %d",(*ptr).age);
    printf("\nPercentage : %0.1f",(*ptr).per);

    return 0;
}
