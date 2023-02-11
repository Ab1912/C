#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=10, *p, **q, ***r;

    p=&a;
    printf("Value of A : %d",a);
    printf("\nAddress of A : %d",&a);
    printf("\nValue of P : %d",p);
    printf("\nAddress of P : %d",&p);
    printf("\nP derefrencing : %d",*p);
    printf("\n-------------------------\n");

    q=&p;
    printf("Value of P : %d",p);
    printf("\nAddress of P : %d",&p);
    printf("\nValue of Q : %d",q);
    printf("\nAddress of Q : %d",&q);
    printf("\nQ derefrencing : %d",**q);
    printf("\n-------------------------\n");

    r=&q;
    printf("Value of Q : %d",q);
    printf("\nAddress of Q : %d",&q);
    printf("\nValue of R : %d",r);
    printf("\nAddress of R : %d",&r);
    printf("\nR derefrencing : %d",***r);
    printf("\n-------------------------\n");
    return 0;
}
