#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d",&a,&b);

    
    if(a>b){
         c = b-a+24;
    }
    else if(b>a)
    {
         c = b-a;
    }
    else
    {
         c = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n",c);

    return 0;
}