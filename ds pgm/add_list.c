#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head1 = NULL, *head2 = NULL, *temp1, *temp2;

void display();
void insert1(int);
void insert2(int);
void join_2_list();

int main()
{
    int ele, pos, ch;

    do
    {
        printf("|------------------>MENU<---------------------|\n");
        printf("|  Enter the number to perform the operation  |\n");
        printf("|  1)Display.                                 |\n");
        printf("|  2)Insert first list.                       |\n");
        printf("|  3)Insert second list.                      |\n");
        printf("|  4)Joining of two list.                     |\n");
        printf("|  5)Exit.                                    |\n");
        scanf("%d", &ch);
        printf("\n|------------------RESULT-------------------|\n");

        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            printf("\nEnter your first list number: ");
            scanf("%d", &ele);
            insert1(ele);
            break;
        case 3:
            printf("\nEnter your second list number: ");
            scanf("%d", &ele);
            insert2(ele);
            break;
        case 4:
            join_2_list();
            display();
            break;
        }

    } while (ch < 5);

    return 0;
}

void display()
{
    temp1 = head1;

    if (head1 == NULL)
        printf("Your list is empty.\n");
    else
    {
        printf("\nYour list is: ");
        printf("\nAddress\tData\tNext address\n");

        while (temp1 != NULL)
        {
            printf("%d\t%d\t%d\n", temp1, temp1->data, temp1->link);
            temp1 = temp1->link;
        }
    }
}

void insert1(int x)
{
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = x;
    temp1->link = head1;
    head1 = temp1;
}

void insert2(int x)
{
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = x;
    temp1->link = head2;
    head2 = temp1;
}

void join_2_list()
{
    temp1 = head1;
    temp2 = head2;

    if (temp1 == NULL)
        printf("\nYour first list is empty.");
    else if (temp2 == NULL)
        printf("\nYour second list is empty.");
    else
    {
        while (temp1 != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = temp2;
    }
}