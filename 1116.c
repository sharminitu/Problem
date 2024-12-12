#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b==0){
            printf("divisao impossivel\n");
        }
        else{
            float x = (float)a/b;
            printf("%.1f\n",x);
        }
    }
    return 0;
}