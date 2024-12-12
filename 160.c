#include<stdio.h>
int main()
{
    float a, avg,sum = 0;
    
    int i,count=0;
    for(i=1;i<=6;i++){
        scanf("%f",&a);

       
        if (a > 0)
        {
            count = count+1;
            sum = sum + a;
        }
    }
    avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);

    return 0;
}