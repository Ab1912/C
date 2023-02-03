/*Program to find 3 digit input as armstrong number or not*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,d1,d2,d3,num2;
    printf("Program to find Armstrong number");
    printf("Enter a 3 digit number : ");
    scanf("%d",&num1);
    d1=num1/100; //first digit
    d2=num1/10; d2=d2%10; //second digit
    d3=num1%10; //third digit
    num2=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);

    if (num1==num2)
    {
        printf("%d is a Armstrong number",num1);
    }
    else
    {
        printf("%d is not a Armstrong number",num1);
    }
    

    




    return 0;
}

