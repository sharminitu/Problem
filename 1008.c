#include<stdio.h>
int main()
{
    int NUMBER,HOUR;
    scanf("%d %d",&NUMBER,&HOUR);
    double SALARY;
    scanf("%lf",&SALARY);

    NUMBER = NUMBER;

    SALARY = (SALARY*HOUR);

    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n",SALARY);

    return 0;
}
