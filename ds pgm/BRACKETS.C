#include<stdio.h>
#include<string.h>

char str[100],ch;
int i,len,top=-1;

int push(char);
void pop();

void main()
{
  clrscr();

  printf("Enter your equation\n");
  gets(str);

  printf("your equation is\n");
  puts(str);

  len=strlen(str);

  for(i=0;i<len;i++)
  {
   ch=str[i];

   if(ch=='(' || ch=='{' || ch=='[')
    {
     push(ch);
    }
   else
    {
      if(ch==')')
      {
	if(str[top]=='(')
	 pop();
      }
      else if(ch=='}')
      {
	if(str[top]=='{')
	  pop();
      }
      else if(ch==']')
      {
       if(str[top]=='[')
	 pop();
      }
    }
  }

  if(top==-1)
    printf("\nYour experasion is balanced\n");
  else
    printf("\nYour experasion is unbalanced\n");

  getch();
}

int push(char x)
{
  top+=1;
  str[top]=x;
}

void pop()
{
 top-=1;
}

/*
O/P
1)
Enter your equation
{[(a+b)*c]}
your equation is
{[(a+b)*c]}

Your experasion is balanced

2)
Enter your equation
{a+b]
your equation is
{a+b]

Your experasion is unbalanced
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
