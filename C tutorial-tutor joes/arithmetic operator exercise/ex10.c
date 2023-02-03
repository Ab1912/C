#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* Total population : 80K,  Men - 52%, Total literate - 48%, Literate Men - 35%
    find population of Illiterate Men & Women */

    printf("Program to find of Illiterate Men & Women\n");
    int tot=80000,totl,toti,lmen,lwomen,imen,iwomen,men,women;
    totl=tot*0.48; /*Total Literate*/
    toti=tot-totl; /*Total Illiterate*/
    men=tot*0.52; /*Men Population*/
    women=tot-men;
    lmen=men*0.35; /*"Literate Men"*/
    lwomen=totl-lmen; /*"Literate Men"*/
    imen = men-lmen; /*Illiterte Men*/
    iwomen=toti-imen; /*Illiterte Men*/
    printf("Total Population        : %d\n",tot);
    printf("Total Men Population    : %d\n",men);
    printf("Total Women Population  : %d\n",women);
    printf("Total Litetrate Men     : %d\n",lmen);
    printf("Total Litetrate Women   : %d\n",lwomen);
    printf("Total Illitetrate Men   : %d\n",imen);
    printf("Total Illitetrate Women : %d",iwomen);

    return 0;
}
