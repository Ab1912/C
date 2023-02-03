#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to calculate Area & Perimeter of a rectangle,
   length & breadth as input*/
    printf("Program to find Area & Perimeter of a rectangle\n");
    float l,b,a,p;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&b);
    a=l*b;
    printf("Area of the rectangle is : %0.3f\n",a);
    p=2*(l+b);
    printf("Perimeter of the rectangle is : %0.3f",p);

    printf("\n------------------------------\n");

    /*Program to calculate Area & circumference of a Circle
    Radius as input*/
    printf("\nProgram to calculate Area & circumference of a Circle\n");
    float ar,cir,r;
    printf("Enter the Radius of the circle : ");
    scanf("%f",&r);
    ar=(3.14)*(r*r);
    cir=(2*3.14)*r;
    printf("Area of the Circle is : %0.3f\n",ar);
    printf("Circumference of the Circle is : %0.3f",cir); 
    return 0;
}
