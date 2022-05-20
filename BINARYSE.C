#include<stdio.h>
#include<conio.h>
void main()
{
  int binarySearch(int [],int,int,int);
  int a[25];
  int data;
  int result,i,ele;
  clrscr();
  printf("Enter number of Elements you want to insert: ");
  scanf("%d",&ele);
  for(i=0;i<ele;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
  }
  printf("\n\nEnter Data you want to search: ");
  scanf("%d",&data);
  result=binarySearch(a,0,ele-1,data);
  if(result==-1)
    printf("\n\nElement Not Found");
  else
    printf("Element is present at Index: %d",result);
  getch();
}
int binarySearch(int a[],int beg,int end,int val)
{
  int mid;
  if(end>=beg)
  {
    mid=(beg+end)/2;
    if(a[mid]==val)
    {
      return mid+1;
    }
    else if(a[mid]<val)
    {
      return binarySearch(a,mid+1,end,val);
    }
    else
    {
      return binarySearch(a,beg,mid-1,val);
    }
  }
  return -1;
}