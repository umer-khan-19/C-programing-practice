#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next, *prev;
};
struct node *head = NULL, *temp1, *temp2;

void display();
void insert_beg(int);
void insert_end(int);
void insert_n_pos(int, int);
void delet_beg();
void delet_end();
void delet_n_pos(int, int);

int main()
{
  int ele, pos, ch;

  // clrscr();

  do
  {
    printf("\n\nEnter the number to perform the operation\n");
    printf("1)Display.\n");
    printf("2)Insert at beg.\n");
    printf("3)Insert at end.\n");
    printf("4)Insert at nth position.\n");
    printf("5)Delete at beg.\n");
    printf("6)Delete at end.\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      display();
      break;
    case 2:
      printf("\nEnter a number to insert at beg: ");
      scanf("%d", &ele);
      insert_beg(ele);
      break;
    case 3:
      printf("\nEnter a number to insert at end: ");
      scanf("%d", &ele);
      insert_end(ele);
      break;

    case 4:
      printf("\nPlease enter a valid position");
      printf("\nEnter a number and position to insert it: ");
      scanf("%d %d", &ele, &pos);
      insert_n_pos(ele, pos);
      break;
      /*
      case 5:
       delet_beg();
       break;
      case 6:
       delet_end();
       break;
       */
    }

  } while (ch < 8);
  return 0;
}

void display()
{
  temp1 = head;

  if (head == NULL)
    printf("Your list is empty.");
  else
  {
    printf("\nYour list is: ");
    printf("\nAddress\t\tPrev address\tData\tNext address\n");

    while (temp1 != NULL)
    {
      printf("%d\t%d\t%d\t%d\n", temp1, temp1->prev, temp1->data, temp1->next);
      temp1 = temp1->next;
    }
  }
}
void insert_beg(int x)
{
  temp2 = head;
  temp1 = (struct node *)malloc(sizeof(struct node));

  temp1->data = x;
  temp1->prev = NULL;

  if (head == NULL)
    temp1->next = NULL;
  else
  {
    temp1->next = head;
    temp2->prev = temp1;
  }
  head = temp1;
}

void insert_end(int x)
{
  temp1 = (struct node *)malloc(sizeof(struct node));
  temp1->data = x;
  temp1->next = NULL;

  if (head == NULL)
  {
    temp1->prev = NULL;
    head = temp1;
  }
  else
  {
    temp2 = head;

    while (temp2->next != NULL)
    {
      temp2 = temp2->next;
    }
    temp2->next = temp1;
    temp1->prev = temp2;
  }
}

void insert_n_pos(int x, int p)
{
  int i;
  temp1 = (struct node *)malloc(sizeof(struct node));


  temp1->data = x;
  temp1 = head;

  for (i = 0; i <=p-1; i++)
  {
    temp1 = temp1->next;
  }
    temp2->next = temp1->next;
    temp2->prev = temp1;
    temp1->next = temp2;
    temp1 = temp2->next;
    temp1->prev = temp2;
  
}