#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        add();
    }
    
    return 0;
}

void add()
{
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    c=a+b;
    printf("Total : %d\n",c);
}