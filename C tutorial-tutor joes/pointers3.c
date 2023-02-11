#include<stdio.h>

int main(int argc, char const *argv[])
{
    int *p, a[]={12,35,64,32,78,87,45};

    p=&a;
    printf("Value of A : %d",a);
    printf("\nAddress of A : %d",&a);
    printf("\nValue of P : %d",p);
    printf("\nDereferencing of *p : %d",*p);
    printf("\nSize if INT type : %d",sizeof(int));
    printf("\nSize of A : %d",sizeof(a));
    printf("\nArray size of A : %d",sizeof(a)/sizeof(int));
    printf("\nValue of A using index : %d",a[3]);
    p++;
    printf("\nValue after p++ : %d",*p);
    printf("\nValue after *++p : %d",*++p);
    printf("\nValue after ++*p : %d",++*p);
    return 0;
}
