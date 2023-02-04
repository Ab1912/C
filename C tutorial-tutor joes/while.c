#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }    
    return 0;
}
