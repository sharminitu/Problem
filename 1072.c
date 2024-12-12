#include<stdio.h>
int main()
{
    int t,c1=0,c2=0;
    scanf("%d",&t);

    while(t--){
        int a ;
        scanf("%d",&a);

        if(10<=a && a<=20)
        {
            c1++;
        }
        else{
            c2++;
        }

    }
    printf("%d in\n",c1);
    printf("%d out\n",c2);

    return 0;
}