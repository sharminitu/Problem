#include<stdio.h>
int main()
{
    double hours,distance, avg_speed;
    scanf("%lf %lf",&hours,&distance);
    avg_speed = (distance/12)*hours; // 1 L fuel use for 12 km 
    printf("%.3lf\n",avg_speed);


    return 0;
}