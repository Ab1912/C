#include<stdio.h>

int main()
{
    /*Program to calculate gross salary
    Basic salary(user input), DA(40%), HRA(20%)*/
    float bs,da,hra,gs;
    printf("Program to calculate Gross Salary\n");
    printf("Enter the Basic Salary : ");
    scanf("%f",&bs);
    da=bs*0.4; hra=bs*0.2; gs=bs+da+hra;
    printf("Basic Salary : %0.2f\n",bs);
    printf("Dearness Allowance : %0.2f\n",da);
    printf("House Rent Allowance : %0.2f\n",hra);
    printf("Gross Salary : %0.2f",gs);

    return 0;
    
}