#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Program to add first and last digit of a number */
    int a,b,c,d;
    printf("Program to add first and last digit of a number\n");
    printf("Enter the 4 digit number : ");
    scanf("%d",&a);
    b=a/1000;
    c=a%10;
    d=b+c;
    printf("Answer : %d",d);
    return 0;
}
