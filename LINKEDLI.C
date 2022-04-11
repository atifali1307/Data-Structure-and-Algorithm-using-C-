// Linked List Program

#include<stdio.h>
#include<conio.h>
typedef struct lklist
{
  int info;
  struct lklist *next;
}node;             // Node contain two part one is info, another is address of next node.
void main()
{
  int ch,data,search_element;
  node *head=NULL,*temp,*ptr=NULL;
  clrscr();
  while(1)
  {
    printf("\n\n1. Insert Element at Beginning.\n");
    printf("2. Linked List Traversing\n");
    printf("3. Insert at End of Linked List\n");
    printf("4. Search an Element in Linked List\n");
    printf("5. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	   printf("Enter Element to be insert: ");
	   scanf("%d",&data);
	   temp=(node *)malloc(sizeof(node));
	   if(temp==NULL)
	     printf("No Memory Available");
	   temp->info=data;
	   if(head!=NULL)
	   {
	     temp->next=head;
	   }
	   else
	   {
	     temp->next=NULL;
	   }
	   head=temp;
	   break;
      case 2:
	   temp=head;
	   while(temp!=NULL)
	   {
	     printf("%d ",temp->info);
	     temp=temp->next;
	   }
	   break;
      case 3:
	   ptr=head;
	   printf("Enter Element to be insert: ");
	   scanf("%d",&data);
	   temp=(node *)malloc(sizeof(node));
	   if(temp==NULL)
	     printf("No Memory Available");
	   temp->info=data;
	   while(ptr->next!=NULL)
	   {
	     ptr=ptr->next;
	   }
	   ptr->next=temp;
	   temp->next=NULL;
	   break;
      case 4:
	   temp=head;
	   printf("Enter Data you want to Search: ");
	   scanf("%d",&search_element);
	   while(temp!=NULL)
	   {
	     if(search_element==temp->info)
	     {
	       printf("Element is present in this Linked List");
	       break;
	     }
	     else
	     {
	       temp=temp->next;
	     }
	   }
	   if(temp==NULL)
	   {
	     printf("Element Not Found in this Linked List");
	   }
	   break;

      case 5:
	   exit(1);
    }
  }
  getch();
}

