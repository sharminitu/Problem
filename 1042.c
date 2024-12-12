#include<stdio.h>
int main()
{
    int a,b,c,temp;
    int ch[3];
    scanf("%d %d %d",&a,&b,&c);
    ch[0]=a;
    ch[1]=b;
    ch[2]=c;
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(ch[i]<ch[j]){
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
            }
        }
        
    }
    for(int k=0;k<3;k++){
        printf("%d\n", ch[k]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
