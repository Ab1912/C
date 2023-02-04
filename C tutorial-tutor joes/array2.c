#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[50][50], b[50][50], c[50][50], i,j,m,n;
    printf("Enter the number of Rows : ");
    scanf("%d",&m);
    printf("Enter the number of Columns : ");
    scanf("%d",&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the values a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }      
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the values b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }      
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("\t%d",c[i][j]);
        }      
        printf("\n");
    }
    return 0;
}
