#include<stdio.h>
int main()
{
    int DD=0,MM=0,YY=0;
    scanf("%d / %d / %d",&DD,&MM,&YY);

    printf("%02d/%02d/%02d\n",MM,DD,YY);
    printf("%02d/%02d/%02d\n",YY,MM,DD);
    printf("%02d-%02d-%02d\n",DD,MM,YY);

    return 0;
}