#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,a[50],n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the values : ");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("\n%d",a[i]);
    }
    
    return 0;
}
