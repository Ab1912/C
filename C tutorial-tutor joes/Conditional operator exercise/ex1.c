/*Library late book return fine
1 to 5 days 50 paise, 6 to 10 days 1 rupee
11 to 30 days 5 rupees, above 30 days membership cancelled*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int days;
    printf("Enter the days : ");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
        printf("Book returned in %d day(s), fine 50 paise",days);
    }
    else if (days>=6 && days<=10)
    {
        printf("Book returned in %d day(s), fine 1 rupee",days);
    }
    else if (days>=11 && days<=30)
    {
        printf("Book returned in %d day(s), fine 5 rupees",days); 
    }
    else
    {
        printf("Membership cancelled");
    }   
    return 0;
}
