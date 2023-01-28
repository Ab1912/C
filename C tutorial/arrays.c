#include<stdio.h>
#include<conio.h>

/*Single dimensional Array*/

void main()
{
    int x,y[5]={4,5,6,7,8};
    printf("Single dimensional Array :\n");
    for(x=0;x<5;x++)
    {
        printf("%d",y[x]);
    }
    arr();
}


/*Two dimensional Array*/
int arr()
{
    int a,b,j[3][3]={1,2,3,4,5,6,7,8,9};
    printf("\nTwo dimensional Array :\n");
    for ( a = 0; a < 3; a++)
    {
        for ( b = 0; b < 3; b++)
        {
            printf("%d",j[a][b]);
        }
        printf("\n");
    } 
    return 0;
}

