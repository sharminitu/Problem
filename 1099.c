#include<stdio.h>
int main()
{
    int t,sum,temp;
    scanf("%d",&t);
    while(t--){
        int a,b,i;
        scanf("%d %d",&a,&b);
    if(a>b){ 
        temp = a;
        a=b;
        b= temp;
    }
        int sum =0;
        for(i=a+1;i<b;i++){
            if(i%2!=0){
                sum+=i;

            }
        }
        printf("%d\n", sum);
    }
    return 0;
    
}