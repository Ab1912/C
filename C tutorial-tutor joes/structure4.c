#include<stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};

int main(int argc, char const *argv[])
{
   
    struct student s[2];
    s[0].name = "Abishek";
    s[0].age = 36;
    s[0].per = 90.5;

    printf("Name : %s",s[0].name);
    printf("\nAge : %d",s[0].age);
    printf("\nPercentage : %0.1f",s[0].per);

    s[1].name = "Kumar";
    s[1].age = 24;
    s[1].per = 82.5;

    printf("\n\nName : %s",s[1].name);
    printf("\nAge : %d",s[1].age);
    printf("\nPercentage : %0.1f",s[1].per);
    return 0;
}
