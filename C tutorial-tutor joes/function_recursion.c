#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c;
    printf("Enter the limit : ");
    scanf("%d",&a);
    c=factorial(a);
    printf("Factorial : %d",c);
    return 0;
}

int factorial(int i)
{
    if (i<=0)
    {
        return 1;
    }
    
        return i*factorial(i-1);  
    
}