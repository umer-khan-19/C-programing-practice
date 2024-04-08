#include<stdio.h>

int s[100],top=-1,i,temp,size;

void display();
void push();
void pop();

void main()
{
 int ch;

 clrscr();

 printf("Enter the size of your stack\n");
 scanf("%d",&size);

 do
 {
   printf("1)Display\n2)Push\n3)pop\n4)Exit\n");
   printf("Enter your choice to perform the operation\n");
   scanf("%d",&ch);

   switch(ch)
   {
    case 1:
	   display();
	   break;
    case 2:
	   push();
	   break;

    case 3:
	   pop();
	   break;
   }
 }while(ch<4);

}

void display()
{
  if(top==-1)
     printf("Stack is empty\n");
  else
  {
     printf("Your stack is\n");

     for(i=top;i>=0;i--)
       printf("%d ",s[i]);
     printf("\n");
  }
}

void push()
{
 int ele;
 printf("Enter the element\n");
 scanf("%d",&ele);

 if(s[top]<=size)
 {
  top+=1;
  s[top]=ele;
 }
 else
     printf("Stack is full\n");
}

void pop()
{
 temp=s[top];

 if(top==-1)
    printf("Stack is empty you can't perform pop operation\n");
 else
    top-=1;
}
/*
Enter the size of your stack
5
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
1
Stack is empty
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
2
Enter the element
1
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
2
Enter the element
2
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
2
Enter the element
3
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
1
Your stack is
3 2 1
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
3
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
3
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
1
Your stack is
1
1)Display
2)Push
3)pop
4)Exit
Enter your choice to perform the operation
4
*/