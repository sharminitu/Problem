
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int i = 1;
    while (t--)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, (i * i)+1, (i * i * i)+1);

        i++;
    }

    return 0;
}