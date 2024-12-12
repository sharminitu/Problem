#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b,c,avg;
        scanf("%f %f %f",&a,&b,&c);

        avg = (2*a+3*b+5*c)/10;

        printf("%.1f\n",avg);

    }
    return 0;
}