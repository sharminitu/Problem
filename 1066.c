#include<stdio.h>
int main()
{
    int a;
    int i,c1=0,c2=0,c3=0,c4=0;
    for(i=0;i<5;i++){
        scanf("%d",&a);

        if(a>0){
            c1++;
        }
        else if(a<0){
            c2++;
        }
        if(a%2==0){
            c3++;
        }
        else if(a%2!=0){
            c4++;
        }
    }
    printf("%d valor(es) par(es)\n",c3);
    printf("%d valor(es) impar(es)\n",c4);
    printf("%d valor(es) positivo(s)\n",c1);
    printf("%d valor(es) negativo(s)\n",c2);

    return 0;
}