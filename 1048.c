#include<stdio.h>
int main()
{
    float old_salary,new_salary,money_earned,Rejustmane_rate,per;
    scanf("%f",&old_salary);
 

    if(old_salary>=0 && old_salary<=400.00){
        Rejustmane_rate = 0.15;
    }
    else if (old_salary >= 400.01 && old_salary <= 800.00){
        Rejustmane_rate = 0.12;
    }
    else if (old_salary >= 800.01 && old_salary <= 1200.00){
        Rejustmane_rate =0.10;
    }
    else if (old_salary >= 1200.01 && old_salary <= 2000.00){
        Rejustmane_rate = 0.07;
    }
    else if(old_salary>2000.00){
        Rejustmane_rate = 0.04;
    }
    money_earned = (old_salary * Rejustmane_rate);
    new_salary = (old_salary + (old_salary * Rejustmane_rate));
    per = Rejustmane_rate*100;
    

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n",money_earned);
    printf("Em percentual: %0.f %%\n",per);

    return 0;
}