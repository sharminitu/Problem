#include<stdio.h>
int main()
{
    int a,sum=0;
    double c=0,avg;
    while(1){
        scanf("%d",&a);
        if(a<0){
            break;
        }
        else{
            sum+=a;
            c++;  
        }
        
    }
     avg = sum/c;
    printf("%.2lf\n",avg);

    return 0;
}