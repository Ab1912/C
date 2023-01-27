/* IF ELSE*/
#include<stdio.h>
#include<conio.h>
/*
void main(){
    int a;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    if(a>5) {
        printf("Number is greater than 4");
    }
    else {
        printf("Number less than 4");
    }
}*/

/*ELSE IF*/

void main(){
    int mark;
    printf("Enter Mark : ");
    scanf("%d",&mark);
    if (mark<35)
    {
        printf("Fail");
    }
    else if (mark>=35 && mark<50) 
    {
        printf("C Grade");
    }
    else if (mark>=50 && mark<90)
    {
        printf("B Grade");
    }
    else if (mark>=90 && mark<=100)
    {
        printf("A Grade");
    }
    else
    {
        printf("Invalid input");
    } 
}