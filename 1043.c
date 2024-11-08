#include<stdio.h>
int main()
{
    double A,B,C,temp;
    double area,triangle;
    scanf("%lf %lf %lf",&A,&B,&C);

    if(A<B+C && B<C+A && C<A+B){
        triangle = A + B + C;
        printf("Perimetro = %.1lf\n", triangle);
        
    }
    else{
        area = (A + B)/2.0 * C;
        printf("Area = %.1lf\n", area);
    }
    
    return 0;

}