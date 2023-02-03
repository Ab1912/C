#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to convert Fahrenheit to celsius
    (32F-32)*5/9 */

    float f,c;
    printf("Program to convert Fahrenheit to Celcius");
    printf("Enter Fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Celcius is : %0.2f",c);
    return 0;
}
