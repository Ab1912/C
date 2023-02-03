#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to calculate students aggregate marks and percentage of 5 subjects*/
    float tam,eng,math,sci,ssci,total,per;
    printf("Program to find Student's Total & Percentage of Marks \n");
    printf("Enter the Marks \n");
    printf("Tamil : ");
    scanf("%f",&tam);
    printf("English : ");
    scanf("%f",&eng);
    printf("Maths : ");
    scanf("%f",&math);
    printf("Science : ");
    scanf("%f",&sci);
    printf("Social Science : ");
    scanf("%f",&ssci);
    total=tam+eng+math+sci+ssci;
    per=total/5;
    printf("Total : %0.2f\n",total);
    printf("Percentage : %0.2f",per);

    return 0;
}
