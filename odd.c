#include<stdio.h>
int main()
{
    int n,i, odd;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0){
            printf("%d = even\n",i);
        }
        else
            printf("%d = odd\n",i);

    }
    return 0;
}