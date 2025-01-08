#include<stdio.h>
int main()
{
    int t,a,i,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        c=0;
        for(i=1;i<=a;i++){
            if(a%i==0){
                c++;
            }
        }
        if(c==2){
            printf("%d eh primo\n", a);
        }
        else{
            printf("%d nao eh primo\n", a);
        }
        
    }
    return 0;
}
