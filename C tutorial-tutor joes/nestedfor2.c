#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,num,sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if (num>10)
        {
            continue;
        }
        sum += num; 
    }
    printf("Total : %d",sum);
    
    return 0;
}

