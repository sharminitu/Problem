#include<stdio.h>
int main()
{
    int a,c=0,c1=0,c2=0;
    
    while(1){
        scanf("%d",&a);
        if (a == 4)
        {
            break;
        }
        if (a == 1)
        {
            c++;  
        }
        else if(a==2){
            c1++;   
        }
        else if(a==3){
            c2++; 
        }
        else{
            continue;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", c);
    printf("Gasolina: %d\n", c1);
    printf("Diesel: %d\n",c2);

    return 0;
}