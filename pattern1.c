#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     printf(" ");
    //     for (j = 1; j <= n; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     printf(" ");
    //     for (j = 1; j <= n; j++)
    //     {
    //         printf("%C ",64+j);
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     printf(" ");
    //     for (j = 1; j <= n; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    for (i = 1; i <= n; i++)
    {
        printf(" ");
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // for (i = 1; i <= n; i++)
    // {
    //     printf(" ");
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
   
    // for (i = 1; i <= n; i++)
    // {
    //     printf(" ");
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%c ",64+j);
    //     }
    //     printf("\n");
    // }
   

    return 0;
}