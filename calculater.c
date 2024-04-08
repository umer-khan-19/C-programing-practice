
#include <stdio.h>

void main()
{
    float num1, num2, result;
    int opration;

    printf("Enter the vlaue of num1  :");
    scanf("%f", &num1);
    printf("Enter the vlaue of  num2 :");
    scanf("%f", &num2);

    printf("1 :Addition\n");
    printf("2 :Subsraction\n");
    printf("3 :Multiplication\n");
    printf("4 :Division\n");
    printf("Please choose the above option from 1 to 4 for opration\n");
    scanf("%d", &opration);

    switch (opration)
    {
    case 1:
        result = num1 + num2;
        printf("The sum of num1 and num2 is :%f", result);
        break;

    case 2:
        result = num1 - num2;
        printf("The subsraction of num1 and num2 is :%f", result);
        break;

    case 3:
        result = num1 * num2;
        printf("The multiplication of num1 and num2 is :%f", result);
        break;

    case 4:
        result = num1 / num2;
        printf("The division of num1 and num2 is :%f", result);

        break;

    default:
        printf("Please choose the option from 1 to 4");

        break;
    }
}