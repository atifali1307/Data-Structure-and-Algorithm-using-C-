#include<stdio.h>
#include<conio.h>
void heap_sort(int [],int);
void build_max_heap(int [],int);
void max_heapify(int [],int,int);
void main()
{
  int i,r,heapsize,n;
  int a[50];
  clrscr();
  printf("How many Elements you want to insert: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
  }
  heapsize=n-1;
  heap_sort(a,heapsize);
  printf("Sorted Elements are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  getch();
}
void heap_sort(int a[],int heapsize)
{
  int i,temp;
  build_max_heap(a,heapsize);
  for(i=heapsize;i>0;i--)
  {
    temp=a[i];
    a[i]=a[0];
    a[0]=temp;
    heapsize--;
    max_heapify(a,0,heapsize);
  }
}
void build_max_heap(int a[],int heapsize)
{
  int i;
  for(i=heapsize/2;i>=0;i--)
  {
    max_heapify(a,i,heapsize);
  }
}
void max_heapify(int a[],int i,int heapsize)
{
  int temp,largest;
  int l=(2*i)+1;
  int r=(2*i)+2;
  if((l<=heapsize)&&(a[l]>a[i]))
  {
    largest=l;
  }
  else
  {
    largest=i;
  }
  if((r<=heapsize)&&(a[r]>a[largest]))
  {
    largest=r;
  }
  if(largest!=i)
  {
    temp=a[i];
    a[i]=a[largest];
    a[largest]=temp;
    max_heapify(a,largest,heapsize);
  }
}