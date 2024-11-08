#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a==1)
        printf("January\n",a);
    else if (a == 2)
        printf("February\n", a);
    else if (a == 3)
        printf("March\n", a);
    else if (a == 4)
        printf("April\n", a);
    else if (a == 5)
        printf("May\n", a);
    else if (a == 6)
        printf("June\n", a);
    else if (a == 7)
        printf("July\n", a);
    else if (a == 8)
        printf("August\n", a);
    else if (a == 9)
        printf("September\n", a);
    else if (a == 10)
        printf("October\n", a);
    else if (a == 11)
        printf("November\n", a);
    else
        printf("December\n", a);
    
    return 0;
}