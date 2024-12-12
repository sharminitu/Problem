// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     if(n==1)
//         printf("one\n",n);
//     else if(n==2)
//         printf("two\n", n);
//     else if(n==3)
//         printf("three\n", n);
//     else if(n==4)
//         printf("four\n", n);
//     else if(n==5)
//         printf("five\n", n);
//     else if(n==6)
//         printf("six\n", n);
//     else if(n==7)
//         printf("seven\n", n);
//     else if(n==8)
//         printf("eight\n", n);
//     else if(n==9)
//         printf("nine\n", n);
//     else
//         printf("Greater than 9\n", n);

//         return 0;
// }

#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, d, i;
    scanf("%d", &d);
    printf("%d %d", a, b);
    for (i = 1; i < d-1 ; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}