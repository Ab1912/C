#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*Program to withdraw cash from ATM on 10,50,100 denomination
    through user input*/
    int amt,hun,fif,ten,bal;
    printf("Enter the Amount to withdraw : ");
    scanf("%d",&amt);
    if(amt%10==0)
    {
    hun=amt/100;
    printf("No of 100 rupees notes is : %d\n",hun);
    fif=(amt-(hun*100))/50;
    printf("No of 50 rupees notes is : %d\n",fif);
    ten=amt%100;
    bal=ten%10;
    ten=(ten%50)/10;
    printf("No of 10 rupees notes is : %d\n",ten);
    printf("Balance  : Rs.%d",bal);
    }
    else
    {
        printf("Enter denomination divisible by Rs.10 & above");
    }
    return 0;
}
