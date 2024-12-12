#include <stdio.h>
int main()
{
    int i,j=2,m;
    float s = 1;
    for ( i = 3;i < 40;i=i+2)
    {

        s += ((float)i / (float)j);
        j *= 2;
            
    }
    printf("%.2f\n", s);
    return 0;
}
