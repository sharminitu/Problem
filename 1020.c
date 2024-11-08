#include<stdio.h>
int main()
{
    int month ,day,days,year,rem1,rem2;
    scanf("%d",&day);
    year= day/365;
    rem1=day%365;
    month=rem1/30;
    days=rem1%30;
    
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;

}