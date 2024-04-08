// program for convert rupees in paisa,
#include <stdio.h>

void main()
{
    long rupees, paisa;
    
    printf("\nEnter the rupees to convert it into paisa : ");
    scanf("%ld", &rupees);

    paisa = 100 * rupees;

    printf("The paisa is %lu", paisa);
}