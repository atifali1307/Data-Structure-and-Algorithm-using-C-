#include<stdio.h>
#include<conio.h>
typedef struct polynomial
{
  int coefficient;
  int power;
  struct polynomial *next;
}node;
void main()
{
  void insert_at_beginning(node **,int,int);
  void traverse(node *);
  node *head=NULL;
  node *head2=NULL;
  int i,j;
  int c,p,terms,polynomial,terms2;
  clrscr();
  printf("Enter Number of Terms in Polynomial: ");
  scanf("%d",&terms);
    for(i=0;i<terms;i++)
    {
    printf("Enter Coefficient and Power of term %d: ",i);
    scanf("%d%d",&c,&p);
    insert_at_beginning(&head,c,p);
    }
    traverse(head);
    printf("\n\n");
    printf("Enter Number of Terms in Second Polynomial: ");
    scanf("%d",&terms2);
    for(i=0;i<terms2;i++)
    {
      printf("Enter Coefficient and Power of term %d: ",i);
      scanf("%d%d",&c,&p);
      insert_at_beginning(&head2,c,p);
    }
    traverse(head2);
  getch();
}
void insert_at_beginning(node **head,int c,int p)
{
  node *temp;
  temp=(node *)malloc(sizeof(node));
  temp->coefficient=c;
  temp->power=p;
  temp->next=*head;
  *head=temp;
}
void traverse(node *head)
{
  printf("\n\n");
  while(head!=NULL)
  {
    printf("%dx^%d ",head->coefficient,head->power);
    head=head->next;
    if(head->coefficient>0)
    {
      printf("+");
    }
  }
}