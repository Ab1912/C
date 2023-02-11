// return with argument

#include<stdio.h>

int add(int, int);

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    c=add(a,b);
    printf("Total : %d",c);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}