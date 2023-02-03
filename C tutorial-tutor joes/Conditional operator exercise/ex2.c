/*Program to find whether a number is odd or even*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is a Even a number",num);
    }
    else
    {
        printf("%d is a Odd a number",num);
    }
    return 0;
}
