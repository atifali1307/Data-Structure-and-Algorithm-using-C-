#include<stdio.h>
#include<conio.h>
void main()
{
  void maxheapify(int [],int,int);
  void heapsort(int [],int);
  void printarr(int [],int);
  int a[]={48,10,23,43,28,26,1};
  int n=length(a);
  printf("Before Sorting Array Elements are: \n\n");
  printarr(a,n);
  heapsort(a,n);
  printf("\n\nAfter sorting Array Elements are: \n\n");
  printarr(a,n);
  getch();
}
void printarr(int arr[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
	printf("%d ",arr[i]);
  }
}
void heapsort(int a[],int n)
{
  int i;
  for(i=n/2-1;i>=0;i--)
	heap1(a,n,i);
  for(i=n-1;i>=0;i--)
  {
	int temp=a[0];
	a[0]=a[i];
	a[i]=temp;
	maxheapify(a,i,0);
  }
}
void maxheapify(int a[],int n,int i)
{
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if(left<n && a[left]>a[largest])
	largest=left;
  if(right<n && a[right]>a[largest])
	largest=right;
  if(largest!=i)
  {
	int temp=a[i];
	a[i]=a[largest];
	a[largest]=temp;
	maxheapify(a,n,largest);
  }
}