#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,distance;
    scanf("%f %f",&x1,&y1);
    float x2,y2;
    scanf("%f %f",&x2,&y2);

    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%.4lf\n",distance);


    return 0;
}