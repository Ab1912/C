#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Program to sum of 5 digit number using modulas input */
    int num,sum=0;
    printf("Enter the 5 digit number : ");
    scanf("%d",&num);
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    printf("%d",sum);
    return 0;
}
