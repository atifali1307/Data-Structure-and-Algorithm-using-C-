#include<stdio.h>
#include<conio.h>
#define NIL -1
#define MAX 5
typedef struct Stack_type
{
  int top;
  int a[MAX];
}Stack;
int main()
{
  int isfull(Stack);
  int isempty(Stack);
  void push(Stack *,int);
  int pop(Stack *);
  int peek(Stack);
  Stack s;
  int data,ch,x;
  clrscr();
  while(1)
  {
  printf("1. PUSH\n");
  printf("2. POP\n");
  printf("3. Exit\n");
  printf("\nEnter your Choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
	  if(isfull(s))
	    printf("Stack is Full. Cannot Push Data into it.\n\n");
	  else
	  {
	    printf("Enter data you want to push into the stack: ");
	    scanf("%d",&data);
	    push(&s,data);
	    printf("Data Pushed Successfully.\n\n");
	  }
	  break;
    case 2:
	  if(isempty(s))
	    printf("Stack is Empty. Cannot Pop Data from it.\n\n");
	  else
	  {
	    x=pop(&s);
	    printf("%d is Popped from the Stack.\n\n",x);
	  }
	  break;
    case 3:
	  exit(0);
    default:
	  printf("Invalid Choice\n\n");
  }
  }
  return;
}
int isfull(Stack s)
{
  if(s.top==4)
    return 1;
  else
    return 0;
}
int isempty(Stack s)
{
  if(s.top==NIL)
    return 1;
  else
    return 0;
}
void push(Stack *p,int data)
{
  p->top=p->top+1;
  p->a[p->top]=data;
}
int pop(Stack *p)
{
  int x;
  x=p->a[p->top];
  p->top=p->top-1;
  return x;
}