#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char c[50],a[20];
    char x[]={'a','b','i','\0'};
    printf("X = %s\n",x);
    printf("Enter the String : ");
    gets(c);

    printf("Compare : %d",strcmp(x,c));
    printf("\nString name : %s",c);
    printf("\nLength : %d",strlen(c));
    printf("\nUppercase : %s",strupr(c));
    printf("\nLowercase : %s",strlwr(c));
    printf("\nReverse : %s",strrev(c));
    printf("\nCopy : %s",strcpy(a,c));
    printf("\nConcatenation : %s",strcat(x,a));
    return 0;
}
