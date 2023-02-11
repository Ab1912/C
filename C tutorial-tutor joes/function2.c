//Function declaration, Function definition, Function calling
// No return with argument function
#include<stdio.h>

//Function Declaration
void add(int,int);
void add2(int, int);

int main(int argc, char const *argv[])
{
    //Function Calling
    add(25,45); // Actual parameter

    int a,b;
    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    add2(a,b);

    return 0;
}

// Function Definition
void add(int x, int y)// Formal parameter
{
   
    printf("Total : %d",x+y);
}

void add2(int j, int k)
{
    printf("Total2 : %d",j+k);
}