#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1, ch;
    do
    {
        printf("If you want to generate number then enter 1 otherwise 2\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            srand(time(0));
            number = rand() % 100 + 1; // generates a random number between 1 to 100
            printf("The number is %d\n ", number);
            break;
        }

    } while (ch < 2);

    return 0;
}