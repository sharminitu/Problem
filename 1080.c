#include<stdio.h>
int main()
{
    int a[100];
    int i,max=0,c;

    for(i=0;i<=100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=100;i++){
        if(max<a[i]){
        max=a[i];
        c=i+1;
        }

    }

    printf("%d\n",max);
    printf("%d\n",c);

    return 0;
}