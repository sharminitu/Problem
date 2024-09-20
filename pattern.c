#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    int c = 0;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-c;col++)
        {
            printf("* ",row);
        }
        c++;
        
        
        
        printf("\n");
    }

    return 0;
}