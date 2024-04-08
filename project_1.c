#include <stdio.h>

void insert();

void main()
{

    // int arr[100], size;

    // printf("Enter size of array ");
    // scanf("%d", &size);

    // printf("Enter elements\n");

    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("Your array is \n");

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    insert();
}

void insert()
{
    int arr[100], size, element, posi;

    printf("Enter size of array ");
    scanf("%d", &size);

    printf("Enter elements\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array is \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter position and the element to insert in array\n");
    scanf("%d %d ", &posi, &element);

    for (int i = size ; i >= posi - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[posi - 1] = element;
    size = size + 1;
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}