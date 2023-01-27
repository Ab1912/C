#include<stdio.h>
#include<conio.h>

void main()
{
    int a, i=3;
    printf("Do While loop :\nEnter the loop count : ");
    scanf("%d",&a);
    do
    {
        printf("%d.This is do while loop\n",i);
        i++;
    } while (i<=a); 
}