#include<stdio.h>
#include<stdlib.h>

int *getting_values();

int *getting_values()
{
    int i;
    int *ptr = (int *)malloc(3*(sizeof(int)));
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the Integer : ");
        scanf("%d",ptr+i);
    }
    return ptr;
}

int main(int argc, char const *argv[])
{
    int i,n=0;
    int *p=getting_values();
    for ( i = 0; i < 3; i++)
    {
        n+=*(p+i);// n=n+10
    }
    printf("Total : %d",n);
    free(p);// free function to clear memory
    p=NULL;  
    return 0;
}
