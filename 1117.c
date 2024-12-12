#include<stdio.h>
int main()
{
    float a,sum=0,c=0,media;
    while(1){
        
        if(c==2){
            break;
        }
        scanf("%f", &a);
        if(a>=0 && a<=10){
            c++;
            sum +=a;
        }
        else{
            printf("nota invalida\n");
        }
        
    }
    media = sum/2.0;
    printf("media = %.2f\n",media);

    return 0;
}