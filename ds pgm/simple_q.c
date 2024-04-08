#include <stdio.h>
#include <stdlib.h>

void insert();
void delet();
void display();         
int q[50], size,front=-1 , rear=-1 , item;

int main()
{   
    int ch;
    
    printf("Enter the size of the queue : ");
    scanf("%d",&size);
    
    do
    {
        printf("\n1 : Insert");
        printf("\n2 : Delete");
        printf("\n3 : Display");
        printf("\n4 : Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                        insert();
                        break;
            case 2:
                        delet();
                        break;
            case 3:
                        display();
                        break;        
            case 4:
                        exit(0);
                        break;
            default:
                        printf("Enter the valid option.");
                    
        }
    }while(ch<=4);
}
void insert()
{
       
    if(rear==size)
       printf("\nQueue Overflow");

    else if (rear==0)
       front = rear = 1;

    else if(rear==size)
       rear=1;
       
    else
       rear=rear+1;
       
    printf("Enter the item : ");
    scanf("%d",&item);
    q[rear] = item;
    printf("%d is inserted\n",item);
       
}
  
void delet()
{
    if(front==0)
        printf("\nQueue Underflow");

    item=q[front];
          
    if(front==rear)
     {
        front=0;
        rear=0;
     }
     
    else if (front==size)
     front=1;
     
    else
     front+=1;
     
    printf("\n%d is deleted",item);
 }  
     
void display()         
{
    for(int i=0;i<=rear;i++)
    printf("%d  ",q[i]);
}
/*
Enter the size of the queue : 5

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 1
Enter the item : 10
10 is inserted

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 1
Enter the item : -90
-90 is inserted

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 1
Enter the item : 7899
7899 is inserted

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 3
10  -90  7899
1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 2
-90 is deleted

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 2
7899 is deleted

1 : Insert
2 : Delete
3 : Display
4 : Exit
Enter your choice : 4
*/

     
     
     