#include<stdio.h>
int main()
{
    double a,b,MEDIA;
    scanf("%lf %lf",&a,&b);

    MEDIA = (a*3.5+b*7.5)/11;
    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;
}