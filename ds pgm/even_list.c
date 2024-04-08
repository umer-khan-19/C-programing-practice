#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL, *temp1, *temp2;

void display();
void insert(int);

int main()
{
    int ele, pos, ch;
    do
    {
        printf("|  Enter the number to perform the operation  |\n");
        printf("|  1)Display even numbers.                    |\n");
        printf("|  2)Insert                                   |\n");
        printf("|  3)Exit                                     |\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            printf("\nEnter a number to insert at beg: ");
            scanf("%d", &ele);
            insert(ele);
            break;
        }

    } while (ch < 3);
    return 0;
}

void display()
{
    temp1 = head;

    if (head == NULL)
        printf("Your list is empty.\n");
    else
    {
        printf("\nYour even numbers is: ");
        printf("\nAddress\t\tData\tNext address\n");

        while (temp1 != NULL)
        {
            if ((temp1->data) % 2 == 0)
            {
                printf("%d\t%d\t%d\n", temp1, temp1->data, temp1->link);
                temp1 = temp1->link;
            }
            else
            {
                temp1 = temp1->link;
            }
        }
    }
}

void insert(int x)
{
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = x;
    temp1->link = head;
    head = temp1;
}
/*
O/P
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: 1
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: 2
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: 3
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: 4
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: 5
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: -10
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: -5
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
2

Enter a number to insert at beg: -90
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
1

Your even numbers is:
Address         Data    Next address
11867784        -90     11867768
11867752        -10     11867736
11867720        4       11867704
11867688        2       11867672
|  Enter the number to perform the operation  |
|  1)Display even numbers.                    |
|  2)Insert                                   |
|  3)Exit                                     |
3
*/