#include<stdio.h>

int main(int argc, char const *argv[])
{
    int j=0;
    ab:
    printf("%d,",j);
    j++;
    if (j!=6)
    {
        goto ab;
    } 
    return 0;
}   