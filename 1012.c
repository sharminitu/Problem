#include<stdio.h>
int main()
{
    double A, B, C, rectangled_triangle, circle, trapezium,
    square,rectangle;
    scanf("%lf %lf %lf",&A,&B,&C);
    rectangled_triangle = (double)1/2*A*C;
    circle = 3.14159*C*C;
    trapezium =(double)1/2*(A+B)*C;
    square = B*B;
    rectangle = A*B;

    printf("TRIANGULO: %.3lf\n",rectangled_triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);

    return 0;
}