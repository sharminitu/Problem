#include<stdio.h>
int main()
{
    int a,i,sum;
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }
       
        if(a%2==0){
            sum = 0;
            for(i=1;i<=5;i++){
                sum+=a;
                a+=2;
            }
            printf("%d\n",sum);
        }
        else{
            a=a+1;
            sum=0;
            for(i=1;i<=5;i++){
                sum+=a;
                a+=2;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}