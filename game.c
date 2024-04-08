#include <stdio.h>

void main()
{

    char y, no, read;
    int sum = 0, num;
    int b1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    clrscr();
    printf("\nThink a number in your mind.\nand press enter.");
    getchar();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", b1[i][j]);
        }
        printf("\n");
    }
    printf("If above block have your number press y otherwise n.\n");
    scanf("%d", &num);
    if (num != 1)
    {
        sum = sum + 1;
    }
     
    printf("sum=", sum);
}