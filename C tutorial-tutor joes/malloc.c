#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*(sizeof(int)));

    if (n==NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Enter the integer : ");
        scanf("%d",ptr+i);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d |",*(ptr+i));
    }
    
    return 0;
}
