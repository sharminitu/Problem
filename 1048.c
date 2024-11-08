#include<stdio.h>
int main()
{
    double old_salary,new_salary,money_earned,percentage,Rejustmane_rate;
    scanf("%lf",&old_salary);

    

    if(old_salary>=0 && old_salary<=400.00){
        Rejustmane_rate = 15/100;
    }
    else if (old_salary >= 400.01 && old_salary <= 800.00){
        Rejustmane_rate = 12 /100;
    }
    else if (old_salary >= 800.01 && old_salary <= 1200.00){
        Rejustmane_rate = 10/100;
    }
    else if (old_salary >= 1200.01 && old_salary <= 2000.00){
        Rejustmane_rate = 7/100;
    }
    else{
        Rejustmane_rate = 4/100;
    }
    money_earned =(old_salary*Rejustmane_rate);
    new_salary = old_salary + money_earned;
    percentage = Rejustmane_rate*100;

    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n",money_earned);
    printf("Em percentual: %.2lf % ",percentage);
}