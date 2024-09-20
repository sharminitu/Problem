#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        if(n<0)
            printf("ODD NEGATIVE\n",n);
        else if(n>0)
            printf("ODD POSITIVE\n",n);
        else
            printf("NULL\n",n);
    }
    
    else
    {
        if(n<0)
            printf("EVEN NEGATIVE\n",n);
        else if (n>0)
            printf("EVEN POSITIVE\n",n);
        else
            printf("NULL\n",n);
    }
    
    return 0;
}