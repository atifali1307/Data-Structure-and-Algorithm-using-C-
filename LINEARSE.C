#include<stdio.h>
#include<conio.h>
void main()
{
  int linearSearch(int [],int,int);
  int a[25];
  int n,i,ele,result,data;
  clrscr();
  printf("Enter Number of Elements you want to Insert: ");
  scanf("%d",&ele);
  for(i=0;i<ele;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
  }
  printf("\n\nEnter Data you want to Search: ");
  scanf("%d",&data);
  n=sizeof(a)/sizeof(a[0]);
  result=linearSearch(a,n,data);
  if(result==-1)
    printf("Element Not Found");
  else
    printf("Element Found at Index: %d",result);
  getch();
}
int linearSearch(int array[],int n,int x)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(array[i]==x)
      return i;
  }
  return -1;
}