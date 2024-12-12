#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

        int i=1;
        while(t--){
            printf("%d %d %d PUM\n",i,i+1,i+2);
            i = i + 4;
    }
    

    return 0;
}