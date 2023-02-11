#include<stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};

int main(int argc, char const *argv[])
{
    //Method 1 :
    struct student s={"Kumar",29,78.5};

    printf("Name : %s",s.name);
    printf("\nAge : %d",s.age);
    printf("\nPercentage : %0.1f",s.per);

    //Method 2 :
    s.name = "Abishek";
    s.age = 36;
    s.per = 90.5;

    printf("\n\nName : %s",s.name);
    printf("\nAge : %d",s.age);
    printf("\nPercentage : %0.1f",s.per);
    return 0;
}
