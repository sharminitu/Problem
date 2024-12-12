#include<stdio.h>
int main()
{
     int a,i;
    scanf("%d",&a);
    int f1=0,f2=1,temp=0;
        printf("%d %d",f1,f2);
    for(i=1;i<a-1;i++)
    {
        temp = f1 + f2;
        printf(" %d", temp);
        
        f1=f2;
        f2=temp;
        
    }
    printf("\n");
    return 0;

}