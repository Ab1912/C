#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}
