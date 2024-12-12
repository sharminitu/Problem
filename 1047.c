#include<stdio.h>
int main()
{
    int a,b,c,d;
    int M,H;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a<c && b<d)
    {
        H = c - a ;
         M = d - b;
    }
    else if(a<c && b>d){
        H = (a-c+24);

        M = (d-b+ 60);
    }
    else{
        H = a-c+24;
        M = b-d;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);

    return 0;
}