#include<stdio.h>
#include<conio.h>
void main()
{
  void printarr(int [],int);
  void countsort(int [],int);
  int getmax(int [],int);
  int a[]={11,30,24,7,31,16};
  int n=sizeof(a)/sizeof(a[0]);
  printf("Before Sorting, Array Elemenets are: \n\n");
  printarr(a,n);
  countsort(a,n);
  printf("\n\nAfter Sorting, Array Elements are: \n\n");
  printarr(a,n);
  getch();
}
void printarr(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
	printf("%d ",a[i]);
  }
}
int getmax(int a[],int n)
{
  int i;
  int max=a[0];
  for(i=1;i<n;i++)
  {
	if(a[i]>max)
	  max=a[i];
  }
  return max;
}
void countsort(int a[],int n)
{
  int i;
  int output[n+1];
  int max=getmax(a,n);
  int count[max+1];
  for(i=0;i<=max;++i)
  {
	count[i]=0;
  }
  for(i=0;i<n;i++)
  {
	count[a[i]]++;
  }
  for(i=1;i<=max;i++)
  {
	count[i]+=count[i-1];
  }
  for(i=n-1;i>=0;i--)
  {
	output[count[a[i]]-1]=a[i];
	count[a[i]]--;
  }
  for(i=0;i<n;i++)
  {
	a[i]=output[i];
  }
}
