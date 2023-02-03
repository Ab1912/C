/*Program find whether chaacter is vowels or not (a,e,i,o,u)*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char vow;
    printf("Enter the Letter : ");
    scanf("%s",&vow);
    switch (vow)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%s is a vowel",vow);
        break;
    default:
        printf("%s is not a vowel",vow);
        break;
    }
    return 0;
}
