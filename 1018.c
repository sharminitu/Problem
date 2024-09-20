#include<stdio.h>
int main()
{
    int N,num1,num2,num3,num4,num5,num6,num7,rem,total;
    scanf("%d",&N);

    num1 = N/100;
    rem = num1%100;
    num1 = rem/50;
    num2 = num1/20;
    num3 = num2/10;
    num4 = num3/5;
    num5 = num4/2;
    num6 = num5/1;




    

        printf(" %d nota(s) de R$ 100,00\n",num1);
        printf(" %d nota(s) de R$ 50,00\n",rem);
        printf(" %d nota(s) de R$ 20,00\n",num2);
        printf(" %d nota(s) de R$ 10,00\n",num3);
        printf(" %d nota(s) de R$ 5,00\n",num4);
        printf(" %d nota(s) de R$ 2,00\n",num5);
        printf(" %d nota(s) de R$ 1,00\n",num6);

        return 0;
}