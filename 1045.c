#include<Stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    A>0,B>0,C>0;
    

    if(A>B&&A>C){
        printf("NAO FORMA TRIANGULO\n",A,B,C);
     if(A*A==B*B+C*C){
        printf("TRIANGULO RETANGULO\n",A,B,C);
     }
    else if(A*A>B*B+C*C){
        printf("TRIANGULO OBTUSANGULO\n",A,B,C);
    }
    else if(A*A<B*B+C*C){
        printf("TRIANGULO ACUTANGULO\n",A,B,C);
    }
    }
    else if(A=B=C)
        printf("TRIANGULO EQUILATERO\n",A,B,C);
    else{
        printf("TRIANGULO ISOSCELES\n",A,B,C);
    }

    return 0;
}