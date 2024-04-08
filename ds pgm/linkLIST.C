#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *link;
};
struct node *head=NULL,*temp1,*temp2;

void display();
void insert_beg(int);
void insert_end(int);
void insert_n_pos(int,int);
void delet_beg();
void delet_end();
void delet_n_pos();


void main()
{
  int ele,pos,ch;

  clrscr();

  do
  {
    printf("|------------------>MENU<---------------------|\n");
    printf("|  Enter the number to perform the operation  |\n");
    printf("|  1)Display.                                 |\n");
    printf("|  2)Insert at beg.                           |\n");
    printf("|  3)Insert at end.                           |\n");
    printf("|  4)Insert at nth position.                  |\n");
    printf("|  5)Delete at beg.                           |\n");
    printf("|  6)Delete at end.                           |\n");
    printf("|  7)Delete at nth position.                  |\n");
    printf("|  8)Exit.                                    |\n");
    scanf("%d",&ch);
    printf("\n|------------------RESULT-------------------|\n");

    switch(ch)
    {
     case 1:
	    display();
	    break;
     case 2:
	    printf("\nEnter a number to insert at beg: ");
	    scanf("%d",&ele);
	    insert_beg(ele);
	    break;
     case 3:
	    printf("\nEnter a number to insert at end: ");
	    scanf("%d",&ele);
	    insert_end(ele);
	    break;
     case 4:
	    printf("\nPlease enter a valid position");
	    printf("\nEnter a number and position to insert it: ");
	    scanf("%d%d",&ele,&pos);
	    insert_n_pos(ele,pos);
	    break;
     case 5:
	    delet_beg();
	    break;
     case 6:
	    delet_end();
	    break;
     case 7:
	    delet_n_pos();
	    break;

    }

   }while(ch<8);
}

void display()
{
 temp1=head;

 if(head==NULL)
   printf("Your list is empty.\n");
 else{
       printf("\nYour list is: ");
       printf("\nAddress\tData\tNext address\n");

       while(temp1!=NULL)
       {
	 printf("%d\t%d\t%d\n",temp1,temp1->data,temp1->link);
	 temp1=temp1->link;
	}
      }
}

void insert_beg(int x)
{
  temp1=(struct node*)malloc(sizeof(struct node));
  temp1->data=x;
  temp1->link=head;
  head=temp1;
}

void insert_end(int x)
{
  temp1=(struct node*)malloc(sizeof(struct node));
  temp1->data=x;
  temp1->link=NULL;

  if(head==NULL)
    head=temp1;
  else
  {
    temp2=head;

    while(temp2->link!=NULL)
     temp2=temp2->link;

     temp2->link=temp1;
  }
}

void insert_n_pos(int x,int n)
{
  int i;

  temp2=(struct node*)malloc(sizeof(struct node));
  temp2->data=x;
  temp1=head;

  for(i=1;i<n-1;i++)
    temp1=temp1->link;

  temp2->link=temp1->link;
  temp1->link=temp2;

}

void delet_beg()
{
 if(head==NULL)
   printf("\nList is empty.You can't delete.\n");
 else
 {
   temp1=head;
   head=temp1->link;
   free(temp1);
 }
}
void delet_end()
{
  if(head==NULL)
    printf("\nList is empty.You can't delete.\n");
  else
   {
    temp1=head;

    while(temp1->link!=NULL)
    {
      temp2=temp1;
      temp1=temp1->link;
    }
    temp2->link=NULL;
     free(temp1);
   }
}

void delet_n_pos()
{
  int p,i;
  printf("\nEnter the position to delete: ");
  scanf("%d",&p);

  if(head==NULL)
      printf("\nList is empty.You can't delete.\n");
  else
     {
	     temp1=head;
	     for(i=1;i<p-1;i++)
	      temp1=temp1->link;

	     temp2=temp1->link;
	     temp1->link=temp2->link;
	     free(temp2);
      }
}
/*
O/P
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
2

|------------------RESULT-------------------|

Enter a number to insert at beg: 1
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
2

|------------------RESULT-------------------|

Enter a number to insert at beg: 2
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
3

|------------------RESULT-------------------|

Enter a number to insert at end: 4
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
3

|------------------RESULT-------------------|

Enter a number to insert at end: 6
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|

Your list is:
Address Data    Next address
17118840        2       17118824
17118824        1       17118856
17118856        4       17118872
17118872        6       0
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
4

|------------------RESULT-------------------|

Please enter a valid position
Enter a number and position to insert it: 3
3
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|

Your list is:
Address Data    Next address
17118840        2       17118824
17118824        1       17118888
17118888        3       17118856
17118856        4       17118872
17118872        6       0
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
5

|------------------RESULT-------------------|
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
5

|------------------RESULT-------------------|
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|

Your list is:
Address Data    Next address
17118888        3       17118856
17118856        4       17118872
17118872        6       0
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
6

|------------------RESULT-------------------|
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|

Your list is:
Address Data    Next address
17118888        3       17118856
17118856        4       0
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
7

|------------------RESULT-------------------|

Enter the position to delete: 2
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|

Your list is:
Address Data    Next address
17118888        3       0
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
5

|------------------RESULT-------------------|
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
1

|------------------RESULT-------------------|
Your list is empty.
|------------------>MENU<---------------------|
|  Enter the number to perform the operation  |
|  1)Display.                                 |
|  2)Insert at beg.                           |
|  3)Insert at end.                           |
|  4)Insert at nth position.                  |
|  5)Delete at beg.                           |
|  6)Delete at end.                           |
|  7)Delete at nth position.                  |
|  8)Exit.                                    |
8

|------------------RESULT-------------------|
*/