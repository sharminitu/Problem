#include<stdio.h>
int main()
{
    int a,m,b,sum=0,i;
    scanf("%d %d",&a,&b);

    for(i=a-1;i>b;i--){
        if(i%2!=0){
        sum += i;
        }
    }
    printf("%d\n",sum);

    return 0;
}