#include<stdio.h>
#include<conio.h>
void main()
{
  void bubblesort(int [],int,int);
  void selectionsort(int[],int,int);
  void inputarray(int [],int,int);
  void outputarray(int [],int,int);
  int a[10],i,n,ch;
  clrscr();
  while(1)
  {
  printf("\n\n1. Input Array Elements\n");
  printf("2. Output Array Elements\n");
  printf("3. Selection Sort\n");
  printf("4. Bubble Sort\n");
  printf("5. Exit\n\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
	 printf("Enter Number of Elements of an Array: \n");
	 scanf("%d",&n);
	 inputarray(a,0,n);
	 break;
    case 2:
	 outputarray(a,0,n);
	 break;
    case 3:
	 selectionsort(a,0,n);
	 break;
    case 4:
	  bubblesort(a,0,n);
	  break;
    case 5:
	  exit(1);
  }
  }
  getch();
}
void inputarray(int a[],int l,int r)
{
  int i;
  for(i=l;i<r;i++)
  {
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
  }
}
void outputarray(int a[],int l,int r)
{
  int i;
  printf("Array Elements are: \n\n");
  for(i=l;i<r;i++)
  {
    printf("%d ",a[i]);
  }
}
void bubblesort(int a[],int l,int r)
{
  int pass,temp,j,flag=1,n=r;
  printf("\n\nSorting usin Bubble Sort:\n");
  for(pass=l;pass<r && flag;pass++)
  {
    flag=0;
    for(j=l;j<r-1-pass;j++)
    {
      if(a[j]>a[j+1])
      {
	flag=1;
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
    }
  }
  outputarray(a,0,n);
}
void selectionsort(int a[],int l,int r)
{
  int i,mi,temp,n=r;
  printf("\n\nSorting using Selection Sort: ");
  for(i=l;i<r;i++)
  {
    mi=min(a,i,r);
    if(i!=mi)
    {
      temp=a[i];
      a[i]=a[mi];
      a[mi]=temp;
    }
  }
  outputarray(a,0,n);
}
