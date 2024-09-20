#include<stdio.h>
int main()
{
    double old_salary,new_salary,money_earned,percentage,Rejustmane_rate;
    scanf("%lf %lf",&old_salary,&Rejustmane_rate);

    money_earned = old_salary % Rejustmane_rate;
    new_salary = old_salary + (old_salary % Rejustmane_rate);
    percentage = Rejustmane_rate

    printf("Novo salario: %.2lf\n",new_salary);
    printf("Reajuste ganho: %.2lf\n",money_earned);
    printf("Em percentual: %.2lf ",percentage);
}