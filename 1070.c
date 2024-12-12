#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=0;

    while(i<6){
        if(a%2!=0){
        printf("%d\n",a);
        i++;
        }
        a++;
    }
    return 0;
}