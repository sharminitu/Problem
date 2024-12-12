#include<stdio.h>
int main()
{
    int X,Z,sum=0,c=0;
    scanf("%d",&X);

    while(1){
        scanf("%d",&Z);
        if(X<Z){
            break;
        }
    }
        for(int i=X;i<=Z;i++)
        {
            sum+=i;
            c++;
            if(sum>Z){
                break;
            }
        }
    
    printf("%d\n",c);

    return 0;
}