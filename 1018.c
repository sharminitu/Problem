#include<stdio.h>
int main()
{
    int N;
    int num1,num2,num3,num4,num5,num6,num7,rem1
    ,rem2,rem3,rem4,rem5,rem6,rem7;
    scanf("%d",&N);

    num1 = N/100;
    rem1 = N%100;
    num2 = rem1/50;
    rem2 = rem1%50;
    num3 = rem2/20;
    rem3 = rem2%20;
    num4 = rem3/10;
    rem4 = rem3%10;
    num5 = rem4/5;
    rem5 = rem4%5;
    num6 = rem5/2;
    rem6 = rem5%2;
    num7 = rem6/1;
    rem7 = rem6%1;

        printf("%d\n",N);
        printf("%d nota(s) de R$ 100,00\n",num1);
        printf("%d nota(s) de R$ 50,00\n",num2);
        printf("%d nota(s) de R$ 20,00\n",num3);
        printf("%d nota(s) de R$ 10,00\n",num4);
        printf("%d nota(s) de R$ 5,00\n",num5);
        printf("%d nota(s) de R$ 2,00\n",num6);
        printf("%d nota(s) de R$ 1,00\n",num7);

        return 0;
}