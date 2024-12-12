#include <stdio.h>
int main()
{
    float sal, tex = 0;
    scanf("%f", &sal);

    if (sal > 2000)
    {
        sal = sal - 2000.0;
        if (0 <= sal && sal <= 1000)
        {
            tex = ((sal * 8) / 100.0);
            sal = sal - 1000.0;
        }
        else if (sal > 1000)
        {

            tex = ((1000 * 8) / 100.0);
            sal = sal - 1000.0;
        }
        if (0 <= sal && sal <= 1500)
        {
            tex = ((sal * 18) / 100.0) + tex;
            sal = sal - 1500.0;
        }
        else if (sal > 1500)
        {
            tex = ((1500 * 18) / 100.0) + tex;
            sal = sal - 1500.0;
        }
        if (sal > 0)
        {
            tex = ((sal * 28) / 100.0) + tex;
        }

        printf("R$ %.2f\n", tex);
    }
    else
    {
        printf("Isento\n");
    }

    return 0;
}