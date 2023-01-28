#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0;
    printf("Start.\n\n");
    e:
    printf("i=%d\n",i);
    while (i<6)
    {
        i++;
        goto e;
    }
    printf("\nEnd.");
}