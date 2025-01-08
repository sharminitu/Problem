#include<stdio.h>
int main()
{
    int b,a[10],i;
    scanf("%d",&b);
    for(i=0;i<10;i++){
        a[i]=b;
        b *= 2;
        printf("N[%d] = %d\n",i,a[i]);
       
    }
    return 0;
}