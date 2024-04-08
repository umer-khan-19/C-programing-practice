#include <stdio.h>

int main()
{
    int arr[50], size, posi;

    printf("Enter size of array.\n");
    scanf("%d", &size);

    printf("\nEnter elements.\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array is \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position of element.\n");
    scanf("%d", &posi);

    for (int i = posi - 1; i <= size-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size -= 1;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}