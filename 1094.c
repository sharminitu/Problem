#include<stdio.h>
int main()
{
    int t,c=0,c1=0,c2=0;
    double S,C,R;
    int i;
    char b, E;
    E = '%';
    scanf("%d",&t); 
    for(i=1;i<=t;i++){
        int a;
        scanf("%d %c",&a,&b);

        if(b=='C'){
            c=c+a;
        }
        else if(b=='R'){
            c1=c1+a;
        }
        else if(b=='S'){
            c2=c2+a;
        }
        
    }
     int sum  = c + c1 + c2;
     C = (c/(sum*1.0))*100.00;
     R = (c1/(sum*1.0))*100.00;
     S = (c2/(sum*1.0))*100.00;


    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",c1);
    printf("Total de sapos: %d\n",c2);
    printf("Percentual de coelhos: %.2lf %c\n",C,E);
    printf("Percentual de ratos: %.2lf %c\n",R,E);
    printf("Percentual de sapos: %.2lf %c\n",S,E);

    return 0;
}