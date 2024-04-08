#include<stdio.h>

int arr[100],size;

void display();
void insert(int,int);
void Delete(int);
void search(int);

int main()
{
	int ch,posi,element,i,n;

	// clrscr();

	printf("\nEnter the size of your array\n");
	scanf("%d",&size);

	printf("\nEnter the elements\n");

	for(i=0;i<size;i++)
	{
	  scanf("%d",&arr[i]);
	}

	printf("\nYour array is \n");

	for(i=0;i<size;i++)
	{
	  printf("%d ",arr[i]);
	 }

	do{
	    printf("\n\n1:Insert\n2:Delete\n3:Search\n4:Display\n5:exit");
	    printf("\n\nEnter a number to perform above operation:");
	    scanf("%d",&ch);

	    switch(ch)
	    {
		case 1:
		       printf("\nEnter position and element\n");
		       scanf("%d%d",&posi,&element);
		       insert(posi,element);

		       break;

		case 2:
		       printf("\nEnter position\n");
		       scanf("%d",&posi);
		       Delete(posi);

		       break;

		case 3:
		       printf("\nEnter a number to search it.\n");
		       scanf("%d",&n);
		       search(n);

		       break;

		case 4:
		      display();

		      break;

	    }

	}while(ch<5);

	return 0;
}

//Function for diaplay.
void display()
{
     int i;

     for(i=0;i<size;i++)
     {
	printf("%d ",arr[i]);
     }
}

//Function for inserting an element.
void insert(int p,int e)
{    int i;

     for(i=size-1;i>=p-1;i--)
     {
       arr[i+1]=arr[i];
     }

     arr[p-1]=e;
     size+=1;

     display();

}

//Function for deleting an element.
void Delete(int p)
{
     int i;

     for(i=p-1;i<=size-1;i++)
     {
      arr[i]=arr[i+1];
     }
     size-=1;

     display();
}

//Function for search an element.
void search(int n)
{
   int i;

   for(i=0;i<size;i++)
   {
    if(arr[i]==n)
	printf("\nYour number is %d and it's position is %d ",n,i+1);

    }

}