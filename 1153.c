#include<stdio.h>
int main()
{
    int a,i,fact =1;

    scanf("%d",&a);

    for(i=1;i<=a;i++){
        fact*=i;
    }
    printf("%d\n",fact);

    return 0;
}