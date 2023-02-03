#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative number");
    }
    else if (num==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Positive number");
    }
    return 0;
}
