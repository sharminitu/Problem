#include<stdio.h>
int main()
{
    int a ,b,c,d;
    double m,n,paid;
    scanf("%d %d %lf",&a,&b,&m);
    scanf("%d %d %lf",&c,&d,&n);
    
    paid = (b*m)+(d*n);

    printf("VALOR A PAGAR: R$ %.2lf\n",paid);

    return 0;
}