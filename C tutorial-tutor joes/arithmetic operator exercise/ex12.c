#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Selling & Profit of 15 items from input
    Find cost of each item */
    float ts,tp,s,p,c;
    printf("Enter the selling price of 15 items : Rs.");
    scanf("%f",&ts);
    printf("Enter the profit of 15 items : Rs.");
    scanf("%f",&tp);
    s=ts/15; p=tp/15; c=s-p;
    printf("Selling price of 1 item is : Rs.%0.2f\n",s);
    printf("Profit of 1 item is : Rs%0.2f.\n",p);
    printf("Cost price of 1 item is : Rs.%0.2f",c);
    return 0;
}
