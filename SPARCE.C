#include <stdio.h>

int main()
{
  int row, col, i, j, count = 0, a[50][50];

  printf("Enter row and column number\n");
  scanf("%d%d", &row, &col);

  printf("Enter elements\n");

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("your matrix is \n");

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < row; i++)
  {

    for (j = 0; j < col; j++)
    {
      if (a[i][j] == 0)
        count += 1;
    }
  }

  if (count >= (row * col) - count)
    printf("Your matrix is sparce matrix.\n ");
  else
    printf("Your matrix is not sparce matrix.\n");

 return 0;
}