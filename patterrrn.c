#include<stdio.h>
int main()
{
    int n,row,col,count;
    scanf("%d",&n);

    for(row=n;row<=1;row++)
    {
        for(col=n;col<=1;col++){
            printf("%d ",col);
        }
        count++;
        printf("\n");
        
    }
}