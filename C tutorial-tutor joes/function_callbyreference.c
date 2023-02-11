//Swap 2 numbers
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    printf("Before swap value of A : %d |value of B : %d",a,b);
    swap(&a,&b);
    printf("\nAfter  swap value of A : %d |value of B : %d",a,b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
}