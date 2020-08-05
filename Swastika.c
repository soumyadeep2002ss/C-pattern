#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter number(odd) of rows: ");
    scanf("%d", &n);
    printf("\n\n");
    for (j = 1; j <= (n / 2) + 1; j++)
    {
        if (j == 1 || j == (n / 2) + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    for (j = 1; j <= (n / 2); j++)
        printf("* ");

    printf("\n");
    for (i = 1; i <= (n / 2) - 1; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == (n / 2) + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (j = 1; j <= n; j++)
    {
        printf("* ");
    }
    printf("\n");

    for (i = 1; i <= (n / 2) - 1; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == (n / 2) + 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (j = 1; j <= (n / 2) + 1; j++)
        printf("* ");
    for (j = 1; j <= n / 2; j++)
    {
        if (j == (n / 2))
            printf("* ");
        else
            printf("  ");
    }
    printf("\n\n");
}