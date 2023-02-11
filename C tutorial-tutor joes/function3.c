//return without argument in function
#include<stdio.h>

int add(); 

int main(int argc, char const *argv[])
{
    int x = add();
    printf("Total : %d",x);
    return 0;
}

int add()
{
    int a,b;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    return a+b;
}