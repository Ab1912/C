/*
Program using switch case
Menu card
1. Coffee   Rs.15
2. Tea      Rs.8
3. Cold Coffee  Rs.25
4. Milk Shake   Rs.50*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int qty,ch,p;
    printf("Menu Card\n");
    printf("1. Coffee Rs.15\n");
    printf("2. Tea Rs.8\n");
    printf("3. Cold Coffee Rs.25 \n");
    printf("4. Milk Shake Rs.50\n");
    printf("Press any other number to exit....\n");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
        printf("You have selected Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d",&qty);
        p=qty*15;
        printf("Total Amount : %d",p);
        break;
    case 2 :
        printf("You have selected Tea\n");
        printf("Enter the quantity : ");
        scanf("%d",&qty);
        p=qty*8;
        printf("Total Amount : %d",p);
        break;
    case 3 :
        printf("You have selected Cold Coffee\n");
        printf("Enter the quantity : ");
        scanf("%d",&qty);
        p=qty*25;
        printf("Total Amount : %d",p);
        break;
    case 4 :
        printf("You have selected Milk Shake\n");
        printf("Enter the quantity : ");
        scanf("%d",&qty);
        p=qty*50;
        printf("Total Amount : %d",p);
        break;
    default:
        break;
    }
    return 0;
}
