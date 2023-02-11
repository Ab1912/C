#include<stdio.h>

typedef struct student
{
    char *name;
    int age;
    float per;
}stu;

int main(int argc, char const *argv[])
{
    stu obj = {"Suresh",27,84.5};
    display(obj);
    return 0;
}

void display(stu obj)
{
    printf("Name : %s",obj.name);
    printf("\nAge : %d",obj.age);
    printf("\nPercentage : %0.2f",obj.per);
}