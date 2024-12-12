#include<stdio.h>
int main()
{
    int a,i,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i%2==0){
            s = i*i;
            printf("%d^2 = %d\n",i,s);
        }
    }
    return 0;
}