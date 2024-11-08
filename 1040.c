#include<stdio.h>
int main()
{
    double A,B,C,D,avarage;
    scanf("%lf %lf %lf %lf",&A,&B,&C,&D);

    avarage = (A*2+B*3+C*4+D*1)/10.0;
    printf("Media: %.1lf\n", avarage);

    
        if (avarage >= 7)
        {
            printf("Aluno aprovado.\n", avarage);
        }
        else if (avarage >= 5)
        {
            printf("Aluno em exame.\n", avarage);
            double E;
            scanf("%lf", &E);
            printf("Nota do exame: %.1lf\n",E);

            double avarage2 = (avarage + E) / 2.0;

            if (avarage2 <= 5.0)
            {
                printf("Aluno reprovado.\n", avarage2);
            }
            else
            {
                printf("Aluno aprovado.\n", avarage2);
            }

            printf("Media final: %.1lf\n", avarage2);
        }
        else
        {
            printf("Aluno reprovado.\n", avarage);
        }
        
    return 0;

}
