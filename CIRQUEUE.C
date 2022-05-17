//Circular Queue

#include<stdio.h>
#include<conio.h>
typedef struct QueueStructure
{
  int front;
  int a[5];
  int rear;
}queue;
void main()
{
  void insertinqueue(queue *,int);
  int deletefromqueue(queue *);
  int isfull(queue *);
  int isempty(queue *);
  queue Q;
  int ch,data,x;
  Q.front=-1;
  Q.rear=-1;
  clrscr();
  while(1)
  {
    printf("\n\n1. Insert Data in Queue.\n");
    printf("2. Delete Data from Queue.\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	   if(isfull(&Q))
	   {
	     printf("\n\nQueue is Full. Data cannot inserted.\n\n");
	   }
	   else
	   {
	     printf("Enter Data: ");
	     scanf("%d",&data);
	     insertinqueue(&Q,data);
	   }
	   break;
      case 2:
	   if(isempty(&Q))
	   {
	     printf("\n\nQueue is Empty. Data cannot be removed from the Queue.\n\n");
	   }
	   else
	   {
	     x=deletefromqueue(&Q);
	     printf("%d is Deleted from Queue\n\n",x);
	   }
	   break;
      case 3:
	   exit(1);
      default:
	   printf("Wrong Choice");
    }
  }
  getch();
}
int isfull(queue *Q)
{
  if(Q->front==0 && Q->rear==4)
    return 1;
  else if(Q->front-1==Q->rear)
    return 1;
  else
    return 0;
}
int isempty(queue *Q)
{
  if(Q->front==-1 && Q->rear==-1)
    return 1;
  else
    return 0;
}
void insertinqueue(queue *Q,int d)
{
  int i;
  if(Q->front==-1)
  {
    Q->front=0;
    Q->rear=0;
  }
  else if(Q->rear==4)
  {
    Q->rear=0;
  }
  else
  {
    Q->rear=Q->rear+1;
  }
  Q->a[Q->rear]=d;
}
int deletefromqueue(queue *Q)
{
  int d;
  d=Q->a[Q->front];
  if(Q->front==Q->rear)
  {
    Q->front=-1;
    Q->rear=-1;
  }
  else if(Q->front==4)
    Q->front=0;
  else
  {
    Q->front=Q->front+1;
  }
  return d;
}
