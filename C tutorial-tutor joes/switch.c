#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ch;
    printf("Enter the value : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 : 
        printf("One");
        break;
    case 2 :
    {
        printf("Two");
        break;
    } 
    case 3 : 
    {
        printf("Three");
        break;
    }
    default:
        printf("More than three");
        break;
    }

    return 0;
}
