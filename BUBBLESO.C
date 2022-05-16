// Bubble Sort

#include<stdio.h>
#include<conio.h>
void main()
{
  void bubblesort(int [],int,int);
  int a[10],i;
  clrscr();
  printf("Enter Elements of an Array: \n");
  for(i=0;i<9;i++)
  {
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
  }
  printf("Array Elements are: \n");
  for(i=0;i<9;i++)
  {
    printf("%d ",a[i]);
  }
  bubblesort(a,0,9);
  printf("\n\nSorted Array is:\n");
  for(i=0;i<9;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
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