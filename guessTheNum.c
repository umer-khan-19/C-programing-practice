#include <stdio.h>
int main()
{
    char ch;
    int sum=0;
    int a[8][7] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 99, 11, 21, 11, 73, 95};

    int b[8][7] = {4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47, 52, 53, 54, 55, 60, 61, 62, 63, 68, 69, 70, 71, 76, 77, 78, 79, 84, 85, 86, 87, 92, 93, 94, 95, 100, 20, 21, 22, 23, 28, 29, 30};

    int c[7][7]={16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,16};

    int d[8][7]={2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31,34,35,38,39,42,43,46,47,50,51,54,55,58,59,62,63,66,67,70,71,74,75,78,79,82,83,86,87,90,91,94,95,98,99,10,11,14,15,18,19};

    int e[7][7]={8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31,40,41,42,43,44,45,46,47,56,57,58,59,60,61,62,63,72,73,74,75,76,77,78,79,88,89,90,91,92,93,94,95,10};

    int f[7][6]={32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,96,97,98,99,100,32,33,34,35,36};

    int g[7][6]={64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,64,65,66,67,68};

    printf("Think a number in your mind between 1 to 100\n");

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", a[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=1;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", b[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=4;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", c[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=16;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", d[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=2;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", e[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=8;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", f[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=32;
    }
    else
        sum+=0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %2d", a[i][j]);
        }
        printf("\n");
    }
    printf("If your number is in the numbers above then enter y otherwise n\n");
    scanf("%c", &ch);
    if (ch=='y'||ch=='Y')
    {
        sum+=64;
    }
    else
        sum+=0;

    printf("Your number is %d ",sum);    
    
    return 0;
}