#include<stdio.h>
#include<conio.h>

void main()
{
    int a,i=3;
    printf("While Loop :\nEnter loop count : ");
    scanf("%d",&a);
    while (i<=a)
    {
        printf("%d.This is While loop\n",i);
        i++;
    }    
}