#include<stdio.h>
int main()
{
    double a,sum=0,media,c=0;

    while(1){
        scanf("%lf", &a);
        printf("novo calculo (1-sim 2-nao)\n");
        
        if (a == 2)
        {
             break;
        }
        else if (a == 1)
        while(1){{
            if (a >= 0 && a <= 10)
            {
                c++;
                sum += a;

                printf("novo calculo (1-sim 2-nao)\n");
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        media = sum / 2.0;

        printf("media = %.2lf\n", media);
        }
        else {
            continue;
        
        }
    }
   
    return 0;

}

// #include <stdio.h>

//     int
//     count()
// {
//     double x, final = 0.0;
//     int count = 0;
//     while (1)
//     {
//         scanf("%lf", &x);
//         if (x > 0 && x <= 10)
//         {
//             final += x;
//             count++;
//             if (count == 2)
//             {
//                 break;
//             }
//         }
//         else
//         {
//             printf("nota invalida\n");
//         }
//     }
//     printf("media = %.2lf\n", final / 2.00);
// }

// int main()
// {
//     int ask;
//     count();
//     while (1)
//     {
//         printf("novo calculo (1-sim 2-nao)\n");
//         scanf("%d", &ask);
//         if (ask == 2)
//         {
//             break;
//         }
//         else if (ask == 1)
//         {
//             count();
//         }
//         else
//         {
//             continue;
//         }
//     }

//     return 0;
// }


