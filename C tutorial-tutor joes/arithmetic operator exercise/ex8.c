#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to reverse a 5 digit number*/
    int num,ans,r1,r2,r3,r4,r5;
    printf("Enter the Number : ");
    scanf("%d",&num);
    r1=num%10;
    num=num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    num=num/10;
    r4=num%10;
    num=num/10;
    r5=num%5;
    ans=(r1*10000)+(r2*1000)+(r3*100)+(r4*10)+r5;
    printf("Reversal of number is : %d",ans);
    return 0;
}
