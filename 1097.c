#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i = i + 2)
    {
        if(i==1){
        for (j = 7; j >= 5; j=j-1)
        {
            printf("I=%d J=%d\n", i, j);
        }
        }
        else if(i==3){
                for (j = 9; j >= 7; j = j - 1)
                {
                    printf("I=%d J=%d\n", i, j);
                }
        }
        else if (i == 5)
        {
            for (j = 11; j >= 9; j = j - 1)
            {
                printf("I=%d J=%d\n", i, j);
            }
        }
        else if (i == 7)
        {
            for (j = 13; j >= 11; j = j - 1)
            {
                printf("I=%d J=%d\n", i, j);
            }
        }
        else
        {
            for (j = 15; j >= 13; j = j - 1)
            {
                printf("I=%d J=%d\n", i, j);
            }
        }
    }
    return 0;
}