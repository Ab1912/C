#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    int *ptr=(int *)malloc(3*(sizeof(int)));

    ptr=(int *)realloc(ptr,5*(sizeof(int)));
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the integer : ");
        scanf("%d",ptr+i);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d | ",*(ptr+i));
    }

    return 0;
}
