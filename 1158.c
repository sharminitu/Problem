#include<stdio.h>
int main()
{
    int t,sum;
    scanf("%d",&t);
    while(t--){
        int a,b,i;
        scanf("%d %d",&a,&b);
        if (a % 2 != 0)
        {
            sum=0;
            for (i = 1; i <= b; i++)
            {
            
                sum+=a;
                a+=2;

            }
            printf("%d\n",sum);
        }
        else{
            a=a+1;
            sum = 0;
            for (i = 1; i <= b; i++)
            {

                sum += a;
                a += 2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
  