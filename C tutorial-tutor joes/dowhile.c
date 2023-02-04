#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    do
    {
      printf("%d\n",i);
      i+=2;

    } while (i<=n);
    
    return 0;
}
