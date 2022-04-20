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
  void delete_from_beginning(node **,node **);
  void delete_from_end(node **,node **);
  void delete_after_element(node *,node **,int);
  void delete_before_element(node **,node *,int);
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
    printf("6. Delete Node from Beginning\n");
    printf("7. Delete Node from Tail\n");
    printf("8. Delete Node after any element\n");
    printf("9. Delete Node before any element\n");
    printf("10. Exit\n");
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
	    delete_from_beginning(&head,&tail);
	    break;
      case 7:
	    delete_from_end(&head,&tail);
	    break;
      case 8:
	    printf("Enter element after which you want to delete the Node: ");
	    scanf("%d",&item);
	    delete_after_element(head,&tail,item);
	    break;
      case 9:
	    printf("Enter element before which you want to delete the Node: ");
	    scanf("%d",&item);
	    delete_before_element(&head,tail,item);
	    break;
      case 10:
	   exit(1);
      default:
	    printf("Invalid Choice");
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
      temp->next=head->next;
      (head->next)->prev=temp;
      head->next=temp;
      temp->prev=head;
      break;
    }
    head=head->next;
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
void delete_from_beginning(node **head,node **tail)
{
  node *temp;
  temp=*head;
  if(*head==*tail)
  {
    *head=NULL;
    *tail=NULL;
  }
  else
  {
    (*head)=(*head)->next;
    (*head)->prev=NULL;
  }
  free(temp);
}
void delete_from_end(node **head,node **tail)
{
  node *temp;
  if(*head==NULL)
  {
    printf("No Node Exist");
  }
  temp=*tail;
  if(*head==*tail)
  {
    *head=*tail=NULL;
  }
  else
  {
    (*tail)=(*tail)->prev;
    (*tail)->next=NULL;
  }
  free(temp);
}
void delete_after_element(node *head,node **tail,int item)
{
  node *temp,*loc;
  while(head!=NULL)
  {
    if(item==head->info)
    {
      break;
    }
    else
      head=head->next;
  }
  if(head==NULL)
  {
    printf("Element not found");
    return;
  }
  loc=head;
  if(loc->next==NULL)
  {
    printf("No Node after given element");
    return;
  }
  temp=loc->next;
  if(temp->next==NULL)
  {
    loc->next=NULL;
    *tail=loc;
  }
  else
  {
    (temp->next)->prev=loc;
    loc->next=temp->next;
  }
  free(temp);
}
void delete_before_element(node **head,node *tail,int item)
{
  node *temp,*loc;
  if(*head==NULL)
  {
    printf("No Node Exist");
  }
  loc=*head;
  while(loc!=NULL)
  {
    if(loc->info==item)
      break;
    else
      loc=loc->next;
  }
  if(loc==NULL)
  {
    printf("Element not found");
  }
  if(loc->prev==NULL)
  {
    return;
  }
  temp=loc->prev;
  if(temp->prev==NULL)
  {
    *head=loc;
    loc->prev=NULL;
  }
  else
  {
    (temp->prev)->next=loc;
    loc->prev=temp->prev;
  }
  free(temp);
}

