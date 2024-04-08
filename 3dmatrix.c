#include <stdio.h>

int main() {

    int m,r,c;
    int arr[50][50][50];

    printf("Enter the no. of matrix :");
    scanf("%d",&m);
    printf("Enter the number of rows and columns \n");
    scanf("%d%d",&r,&c);

    printf("Enter the elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        printf("Your %d matrix is \n",i+1);
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf(" %d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}