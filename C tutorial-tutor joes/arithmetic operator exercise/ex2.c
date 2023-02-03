#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to convert Kilometre to metre,centimetre,inches,feet*/
    float km,mt,cm,in,ft;
    printf("Program to convert Kilometre to metre,centimetre,inches,feet\n");
    printf("Enter the Kilometre to convert : ");
    scanf("%f",&km);
    mt=km*1000; cm=mt*100; in=cm/2.54; ft=in/12;
    printf("Metre : %0.2f\n",mt);
    printf("Centimetre : %0.2f\n",cm);
    printf("Inches : %0.2f\n",in);
    printf("Feet : %0.2f",ft);

    return 0;
}

    