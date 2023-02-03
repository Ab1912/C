#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    float d;
    printf("Arithematic operators \n");
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    c=a+b;
    printf("Addition : %d\n",c);
    c=a-b;
    printf("Subtraction : %d\n",c);
    c=a*b;
    printf("Multiplication : %d\n",c);
    d=(float)a/(float)b;
    printf("Division : %0.2f\n",d);
    c=a%b;
    printf("Modulos : %d",c);
    return 0;

}
