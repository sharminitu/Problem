#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a<<b<<c<<c<<d<<e)
    {
        printf("C\n",a,b,c,d,e);
    }
    else if(a>>b>>c>>d>>e)
    {
        printf("D\n",a,b,c,d,e);
    }
    else{
        printf("N\n",a,b,c,d,e);
    }
}