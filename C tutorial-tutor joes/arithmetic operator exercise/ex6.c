#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to Swapping values*/
    printf("Method 1 :\n");
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of A is : %d\n",a);
    printf("Value of B is : %d",b);

    printf("\n------------------\n");

    printf("Method 2 :\n");
    int x,y;
    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Value of X is : %d\n",x);
    printf("Value of Y is : %d",y);

    return 0;
}
