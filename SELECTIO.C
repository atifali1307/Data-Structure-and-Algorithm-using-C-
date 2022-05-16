// Selection Sort

#include<stdio.h>
#include<conio.h>
void main()
{
  void selectionsort(int [],int,int);
  int min(int [],int,int);
  int a[10],i;
  clrscr();
  printf("Enter values of Array: ");
  for(i=0;i<9;i++)
  {
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
  }
  printf("\n\nArray Elements are: \n");
  for(i=0;i<9;i++)
  {
    printf("%d ",a[i]);
  }
  selectionsort(a,0,9);
  printf("\n\nSorted Array is: \n");
  for(i=0;i<9;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
}
void selectionsort(int a[],int l,int r)
{
  int i,mi,temp;
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
}
int min(int a[],int l,int r)
{
  int m,mi,i;
  m=a[l];
  mi=l;
  for(i=l+1;i<r;i++)
  {
    if(m>a[i])
    {
      m=a[i];
      mi=i;
    }
  }
  return mi;
}
