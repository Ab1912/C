#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    ab:
    printf("%d\n",i);
    i++;
    if (i!=6)
    {
        goto ab;       
    }   
    return 0;
}