#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n=1;

    for(int i=1;i<=b;i++){
        if(n==a){
            printf("\n");
            n=1;
        }
        else{
            printf(" %d",i);
            n++;
        }
    }
    return 0;
}