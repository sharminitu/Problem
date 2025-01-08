#include<stdio.h>
int main(){
    int a[20],i,j,temp;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){
        temp = a[j];
        a[j] = a[19-j];
        a[19-j] = temp;
        
    }
    for (int k = 0; k< 20; k++)
    {
        printf("N[%d] = %d\n", k, a[k]);
    }
    return 0;
}