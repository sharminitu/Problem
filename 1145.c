#include<stdio.h>
int main()
{
    int x,y,i,j,l,m=1;
    scanf("%d %d",&x,&y);
    int a = y/x;
    l=x;
    for(i=1;i<=a;i++){
        printf("%d",m);
        for(j=m+1;j<=l;j++)
        {
            printf(" %d",j);
        }
            printf("\n");
            m+=x;
            l+=x;
    }
    return 0;
    
}