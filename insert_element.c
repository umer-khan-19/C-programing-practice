#include <stdio.h>

void main()

{

    int arr[50], size, posi, element;

    printf("Enter size of array.\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array is \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position and element\n");
    scanf("%d %d", &posi, &element);

    for (int i = size - 1; i > posi - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[posi - 1] = element;
    size += 1;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
