/*Structure in C*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct structure
{
    int id;
    char name[50];
    char cls[20]; 
};

int main(int argc, char const *argv[])
{
    struct structure st1,st2;
    st1.id=1;
    strcpy(st1.name,"Kumar");
    strcpy(st1.cls,"Tenth");

    st2.id=2;
    st2.id=2;
    strcpy(st2.name,"Karthik");
    strcpy(st2.cls,"Eleventh");

    printf("ID : %d\n",st1.id);
    printf("Name : %s\n",st1.name);
    printf("Class : %s\n",st1.cls);

    printf("-------------------\n");

    printf("ID : %d\n",st2.id);
    printf("Name : %s\n",st2.name);
    printf("Class : %s\n",st2.cls);
    return 0;
}
