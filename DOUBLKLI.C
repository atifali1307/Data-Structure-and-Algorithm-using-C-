#include<stdio.h>
#include<conio.h>
typedef struct lklist
{
  struct lklist *prev;
  int info;
  struct lklist *next;
}node;
void main()
{
  void insert_at_beg(node **,node **,int);
  void insert_at_end(node **,node **,int);
  void traverse(node *);
  void traverse_in_reverse(node *);
  void create_dklist(node **,node **);
  void insert_after_element(node *,node *,int,int);
  node *head,*tail;
  int ch,data,item;
  clrscr();
  create_dklist(&head,&tail);
  while(1)
  {
    printf("\n\n1. Insert Node at Beginning\n");
    printf("2. Insert Node at End\n");
    printf("3. Traverse\n");
    printf("4. Traverse in Reverse Order\n");
    printf("5. Insert Node after Element\n");
    printf("6. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	    printf("Enter Element: ");
	    scanf("%d",&data);
	    insert_at_beg(&head,&tail,data);
	    break;
      case 2:
	    printf("Enter Element: ");
	    scanf("%d",&data);
	    insert_at_end(&head,&tail,data);
	    break;
      case 3:
	    traverse(head);
	    break;
      case 4:
	    traverse_in_reverse(tail);
	    break;
      case 5:
	    printf("Enter Element after which you want to insert node: ");
	    scanf("%d",&item);
	    printf("Enter Element: ");
	    scanf("%d",&data);
	    insert_after_element(head,tail,data,item);
	    break;

      case 6:
	   exit(1);
    }
  }
  getch();
}
void create_dklist(node **head,node **tail)
{
  *head=NULL;
  *tail=NULL;
}
void insert_at_beg(node **head,node **tail,int data)
{
  node *temp;
  temp=(node *)malloc(sizeof(node));
  temp->info=data;
  temp->prev=NULL;
  temp->next=*head;
  if(*head==NULL)
  {
    *head=*tail=temp;
  }
  else
  {
    (*head)->prev=temp;
    *head=temp;
  }
}
void insert_at_end(node **head,node **tail,int data)
{
  node *temp;
  temp=(node *)malloc(sizeof(node));
  temp->info=data;
  temp->next=NULL;
  temp->prev=*tail;
  if(*tail==NULL)
  {
    *head=*tail=temp;
  }
  else
  {
    temp->prev=*tail;
    (*tail)->next=temp;
    temp->next=NULL;
    *tail=temp;
  }
}
void insert_after_element(node *head,node *tail,int data,int item)
{
  node *temp;
  temp=(node *)malloc(sizeof(node));
  temp->info=data;
  while(head->next!=NULL)
  {
    if(head->info==item)
    {
      head->next=temp;
      temp->prev=head;
      temp->next=head->next;
      (head->next)->prev=temp;
      break;
    }
  }
}
void traverse(node *head)
{
  while(head!=NULL)
  {
    printf("%d  ",head->info);
    head=head->next;
  }
}
void traverse_in_reverse(node *tail)
{
  while(tail!=NULL)
  {
    printf("%d  ",tail->info);
    tail=tail->prev;
  }
}

