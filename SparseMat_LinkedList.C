#include<stdio.h>
#include<conio.h>
typedef struct Node
{
  int data;
  int row_loc;
  int col_loc;
  struct Node *next;
}node;
void main()
{
  void create_node(node **,int,int,int);
  void printlist(node *);
  node *start=NULL;
  int sp_matrix[3][3];
  int i,j;
  clrscr();
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&sp_matrix[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(sp_matrix[i][j]!=0)
	create_node(&start,sp_matrix[i][j],i,j);
    }
  }
  printlist(start);
  getch();
}


void create_node(node** start,int non_zero_element,int row_index,int col_index)
{
  node *temp,*r;
  temp=*start;
  if(temp==NULL)
  {
    temp=(node *)malloc(sizeof(node));
    temp->data=non_zero_element;
    temp->row_loc=row_index;
    temp->col_loc=col_index;
    temp->next=NULL;
    *start=temp;
  }
  else
  {
    while(temp->next!=NULL)
      temp=temp->next;
    r=(node *)malloc(sizeof(node));
    r->data=non_zero_element;
    r->row_loc=row_index;
    r->col_loc=col_index;
    r->next=NULL;
    temp->next=r;
  }
}
void printlist(node *start)
{
  node *temp,*r,*s;
  temp=r=s=start;
  printf("Row Position:    ");
  while(temp!=NULL)
  {
    printf("%d ",temp->row_loc);
    temp=temp->next;
  }
  printf("\n");
  printf("Column Position: ");
  while(r!=NULL)
  {
    printf("%d ",r->col_loc);
    r=r->next;
  }
  printf("\n");
  printf("Value:           ");
  while(s!=NULL)
  {
    printf("%d ",s->data);
    s=s->next;
  }
  printf("\n");
}
