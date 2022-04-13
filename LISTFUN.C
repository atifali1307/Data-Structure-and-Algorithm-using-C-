#include<stdio.h>
#include<conio.h>
typedef struct lklist
{
  int info;
  struct lklist *next;
}node;
void main()
{
  int ch,item,data;
  node *head,*loc,*temp;
  void insert_at_beginning(node **,int);
  void insert_at_last(node **,int);
  void create_list(node **);
  void display_list(node *);
  clrscr();
  create_list(&head);
  while(1)
  {
	printf("\n\n1. Insert Node at Beginning.\n");
	printf("2. Display Linked List\n");
	printf("3. Insert Node at Last\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
		   printf("Enter Data you want to Insert: ");
		   scanf("%d",&data);
		   insert_at_beginning(&head,data);
		   break;
	  case 2:
		   display_list(head);
		   break;
	  case 3:
		   printf("Enter Data you want to insert: ");
		   scanf("%d",&data);
		   insert_at_last(&head,data);
		   break;
	  case 4:
		   exit(1);
	}
  }
  getch();
}
void create_list(node **head)
{
  *head=NULL;
}
void insert_at_beginning(node **head, int data)
{
  node *temp;
  temp=(node *)malloc(sizeof(node));
  temp->info=data;
  temp->next=*head;
  *head=temp;
}
void display_list(node *head)
{
  node *temp;
  temp=head;
	   while(temp!=NULL)
	   {
		 printf("%d ",temp->info);
		 temp=temp->next;
	   }
}
void insert_at_last(node **head, int data)
{
  node *temp,*ptr;
  temp=(node *)malloc(sizeof(node));
  temp->info=data;
  temp->next=NULL;
  if(*head==NULL)
	*head=temp;
  else
  {
	ptr=*head;
	while(ptr->next!=NULL)
	{
	  ptr=ptr->next;
	}
  }
  ptr->next=temp;
}
