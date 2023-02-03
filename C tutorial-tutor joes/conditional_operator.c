#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the value of A & B : ");
    scanf("%d%d",&a,&b);
    c=a>b ? a:b;
    printf("Greatest number is : %d",c);    
    return 0;
}
