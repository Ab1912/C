#include<stdio.h>

enum num{a=10,b=20,c};

int main(int argc, char const *argv[])
{
    enum num n;
    n=c;
    printf("%d\n",n);
    enum name{one=1,two=2,three=42};
    enum name n1;
    n1=three;
    printf("%d",n1);
    return 0;
}
