#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter values between 3 to 5 : ");
    scanf("%d",&a);
    switch (a)
    {
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;    
    default:
        printf("Enter values between 3 to 5");
        break;
    }
}