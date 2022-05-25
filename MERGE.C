// Merge Sort

#include<stdio.h>
#include<conio.h>
void merge(int [],int,int,int);
void partition(int [],int,int);
void main()
{
  int i,n;
  int merge[50];
  clrscr();
  printf("How many Elements you want to insert: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&merge[i]);
  }
  partition(merge,0,n-1);
  printf("Sorted Elements are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",merge[i]);
  }
  getch();
}
void partition(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
    partition(arr,low,mid);
    partition(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}
void merge(int arr[],int low,int mid,int high)
{
  int i,m,k,l,temp[50];
  l=low;    // index of first element of first part
  m=mid+1;  // index of first element of second part
  i=low;
  while((l<=mid)&&(m<=high))
  {
    if(arr[l]<=arr[m])
    {
      temp[i]=arr[l];
      l++;
    }
    else
    {
      temp[i]=arr[m];
      m++;
    }
    i++;
  }
  if(l>mid)
  {
    for(k=m;k<=high;k++)
    {
      temp[i]=arr[k];
      i++;
    }
  }
  else
  {
    for(k=l;k<=mid;k++)
    {
      temp[i]=arr[k];
      i++;
    }
  }
  for(k=low;k<=high;k++)
  {
    arr[k]=temp[k];
  }

}








