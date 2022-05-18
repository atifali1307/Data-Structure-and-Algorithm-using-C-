#include<stdio.h>
#include<conio.h>
typedef struct stackst
{
  int data;
  struct stackst *top;
}stack;
void main()
{
  int ch,item,data;
  stack *head;
  void push(stack **,int);
  void pop(stack **);
  void create_stack(stack **);
  clrscr();
  create_stack(&head);
  while(1)
  {
    printf("\n\n1. Push\n");
    printf("2. Pop\n");
    printf("3. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	   printf("Enter Data: ");
	   scanf("%d",&data);
	   push(&head,data);
	   printf("\n\nData Pushed Into the STACK Successfully.\n\n");
	   break;
      case 2:
	   pop(&head);
	   break;
      case 3:
	   exit(1);
	   break;
      default:
	   printf("Wrong Choice");
    }
  }
  getch();
}
void create_stack(stack **head)
{
  *head=NULL;
}
void push(stack **head,int data)
{
  stack *temp;
  temp=(stack *)malloc(sizeof(stack));
  temp->data=data;
  temp->top=*head;
  *head=temp;
}
void pop(stack **head)
{
  int d;
  stack *del;
  del=*head;
  if(*head==NULL)
    printf("\n\nStack is Empty. No Data is Popped\n\n");
  else
  {
    d=(*head)->data;
    printf("%d is Popped from the STACK\n\n",d);
    *head=(*head)->top;
    free(del);
  }
}