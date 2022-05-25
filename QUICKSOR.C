// Quick Sort

#include<stdio.h>
#include<conio.h>
void quicksort(int [],int,int);
void main()
{
  int i,n;
  int A[50];
  clrscr();
  printf("How many Elements you want to insert: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&A[i]);
  }
  quicksort(A,0,n-1);
  printf("Sorted Elements are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",A[i]);
  }
  getch();
}
void quicksort(int A[],int first,int last)
{
  int i,j,pivot,temp;
  if(first<last)
  {
    pivot=first;
    i=first;
    j=last;
    while(i<j)
    {
      while(A[i]<A[pivot]&&i<last)
	i++;
      while(A[j]>=A[pivot]&&j>first)
	j--;
      if(i<j)
      {
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
      }
    }
    temp=A[pivot];
    A[pivot]=A[j];
    A[j]=temp;
    quicksort(A,first,j-1);
    quicksort(A,j+1,last);
  }
}
