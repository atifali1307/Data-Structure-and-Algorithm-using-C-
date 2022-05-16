// Bubble Sort

#include<stdio.h>
#include<conio.h>
void main()
{
  void bubblesort(int [],int,int);
  void inputarray(int [],int,int);
  void outputarray(int [],int,int);
  int a[10],i,n;
  clrscr();
  printf("Enter Number of Elements of an Array: \n");
  scanf("%d",&n);
  inputarray(a,0,n);
  outputarray(a,0,n);

  bubblesort(a,0,n);
  printf("\n\nSorted Array is:\n");
  outputarray(a,0,n);
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
  int pass,temp,j,flag=1;
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
}