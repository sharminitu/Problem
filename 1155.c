#include<stdio.h>
int main()
{
    float s=0,c;
    for(int i=1;i<=100;i++){
        
            s += (1 / (float)i);
    }
    printf("%.2f\n",s);
    return 0;
}
