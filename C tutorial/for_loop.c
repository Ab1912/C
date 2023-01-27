#include<stdio.h>
#include<conio.h>

void main()
{
    int i,num;
    printf("Enter the lines you want to print : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        printf("%d.This is For loop\n",i);
    }
    
}