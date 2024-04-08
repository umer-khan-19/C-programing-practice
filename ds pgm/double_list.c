#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head; 
void insert_beg();  
void insert_end();  
void insert_n_pos();  
void delet_beg();  
void delet_end();  
void delet_n_pos();  
void display();    
void main ()  
{  
int ch;  
    do {  
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list\n");  
        printf("1.Insert a begining\n");
        printf("2.Insert at end\n");
        printf("3.Insert at nth position\n");
        printf("4.Delete at begining\n");
        printf("5.Delete at end\n");
        printf("6.Delete at nth position\n");
        printf("7.Display\n");
        printf("8.Exit\n");
        printf("Enter your choice : ");  
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
                    insert_beg();  
                    break;  
            case 2:  
                    insert_end();  
                    break;  
            case 3:  
                    insert_n_pos();  
                    break;  
            case 4:  
                    delet_beg();  
                    break;  
            case 5:  
                    delet_end();  
                    break;  
            case 6:  
                    delet_n_pos();  
                    break;  
            case 7:  
                    display();  
                    break;  
            case 8:  
                    exit(0);  
                    break;  
            default:  
                    printf("Please enter valid choice..");  
        }  
    }  while (ch<=8);
}  

void insert_beg()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value ");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\nNode inserted\n");  
}  
}

void insert_end()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value ");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->prev = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          ptr->next = NULL;  
          }  
    }  
     printf("\nnode inserted\n");  
    }  

void insert_n_pos()  
{  
   struct node *ptr,*temp;  
   int item,loc,i;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       temp=head;  
       printf("Enter the location ");  
       scanf("%d",&loc);  
       for(i=0;i<loc;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\n There are less than %d elements", loc);  
               return;  
           }  
       }  
       printf("Enter value ");  
       scanf("%d",&item);  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       printf("\nnode inserted\n");  
   }  
}  

void delet_beg()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\nnode deleted\n");  
    }    
}  

void delet_end()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}  

void delet_n_pos()  
{  
    struct node *ptr, *temp;  
    int val;  
    printf("\n Enter the data after which the node is to be deleted : ");  
    scanf("%d", &val);  
    ptr = head;  
    while(ptr -> data != val)  
    ptr = ptr -> next;  
    if(ptr -> next == NULL)  
    {  
        printf("\nCan't delete\n");  
    }  
    else if(ptr -> next -> next == NULL)  
    {  
        ptr ->next = NULL;  
    }  
    else  
    {   
        temp = ptr -> next;  
        ptr -> next = temp -> next;  
        temp -> next -> prev = ptr;  
        free(temp);  
        printf("\nnode deleted\n");  
    }     
}  

void display()  
{  
    struct node *ptr;  
    ptr = head;  

    if(head==NULL)
       printf("Your list is empty\n");
    else{
       printf("Your list is\n");  
       printf("\nPrevious Address\tAddress\t\tData\tNext address\n");
       while(ptr != NULL)  
        {  
	      printf("%10d \t%10d \t%10d \t%10d\n",ptr->prev,ptr,ptr->data,ptr->next); 
          ptr=ptr->next;  
        }  
    }   
}   
/*
*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 1

Enter Item value 10

Node inserted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 2

Enter value 20

node inserted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 2

Enter value -209

node inserted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 2

Enter value 30

node inserted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 3
Enter the location 3
Enter value 290

node inserted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 7
Your list is

Previous Address        Address         Data    Next address
         0         8394272              10         8394296
   8394272         8394296              20         8394320
   8394296         8394320            -209         8394344
   8394320         8394344              30         8394368
   8394368         8394368             290               0

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 4

node deleted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 4

node deleted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 5

node deleted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 5

node deleted

*********Main Menu*********

Choose one option from the following list
1.Insert a begining
2.Insert at end
3.Insert at nth position
4.Delete at begining
4.Delete at begining
5.Delete at end
6.Delete at nth position
7.Display
8.Exit
Enter your choice : 8
*/