#include<stdio.h>
#include<stdlib.h>

//function decleration.
void display();
void insert_beg(int);
void insert_end(int);
void insert_n_pos();
void delet_beg();
void delet_end();
void delet_n_pos();

//Globally decleration.
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp1,*temp2;

//main function.
int main()
{
   int ch,ele;
  // clrscr();

   do
   {
      printf("\n***************MENU***************\n");
      printf("\nEnter a number to perfom the operation\n");
      printf("1)Display list\n");
      printf("2)Insert an element at beginning\n");
      printf("3)Insert an element at end\n");
      scanf("%d",&ch);
      printf("\n**********************************\n");

      switch(ch)
      {
       case 1:
	      display();
	      break;

       case 2:
	      printf("Enter an element :");
	      scanf("%d",&ele);
	      insert_beg(ele);
	      break;

	case 3:
	      printf("Enter an element :");
	      scanf("%d",&ele);
	      insert_end(ele);
	      break;
      }

   }while(ch<5);
   return 0;
}

void display()
{
   if(head==NULL)
     printf("Your list is empty\n");
   else
   {
     while(temp1!=NULL)
     {
       printf("%d ",temp1->data);
       temp1=temp1->next;
     }

   }

}

//function for inserting an element at beginning.
void insert_beg(int x)
{
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=head;
    head=temp1;

}

//Function for inserting an element at end.
void insert_end(int x)
{
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=x;
    temp2->next=NULL;

    if(head==NULL)
       head=temp2;
    else
    {
      temp1=head;
      while(temp1->next!=NULL)
       {
       	 temp1=temp1->next;
	 temp1->next=temp2;
       }
    }
}

















