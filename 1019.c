#include<stdio.h>
int main()
{
    int n, rem,hour,min,sec;
    scanf("%d",&n);
    hour = n/3600;
    rem = n%3600;
    min = rem/60;
    sec = n%60;
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}