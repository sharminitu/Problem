#include<stdio.h>
int main()
{
    int total_ditance;
    float total_fuel,avarage_consumption;
    scanf("%d %f",&total_ditance,&total_fuel);

    avarage_consumption = total_ditance / total_fuel;
    printf("%.3lf km/l\n",avarage_consumption);
    return 0;

}