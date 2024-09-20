#include<stdio.h>
int main()
{
    char name[50];
    double b,c,TOTAL;
    scanf("%s %lf %lf",&name,&b,&c);

    TOTAL = b+(c*15/100);

    printf("TOTAL = R$ %.2lf\n",TOTAL);




    return 0;
}
#include <stdio.h>

int main()
{
//     char name[50];
//     double fixed_salary, sales, total_salary;

//     // Read the salesperson's name (not used in calculations)
//     scanf("%s", name);

//     // Read the fixed salary and total sales
//     scanf("%lf %lf", &fixed_salary, &sales);

//     // Calculate the total salary including 15% commission on sales
//     total_salary = fixed_salary + (sales * 0.15);

//     // Print the final salary with 2 decimal places
//     printf("TOTAL = R$ %.2lf\n", total_salary);

//     return 0;
// }
