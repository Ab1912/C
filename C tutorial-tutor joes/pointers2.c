#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=10;
    int *p,*q;

    p=&a;
    q=p+1;
    
    printf("Size of A : %d",sizeof(a));
    printf("\nValue of P : %d",p);
    printf("\nValue of Q : %d",q);
    return 0;
}
