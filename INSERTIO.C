#include<stdio.h>
#include<conio.h>
void main()
{
  void insertion(int []);
  int a[10];
  int i;
  clrscr();
  printf("Enter Array Elements: \n");
  for(i=0;i<10;i++)
  {
	printf("a[%d]: ",i);
	scanf("%d",&a[i]);
  }
  printf("\n\nArray Elements are: \n\n");
  for(i=0;i<10;i++)
  {
	printf("%d ",a[i]);
  }
  insertion(a);
  printf("\n\nArray Sorted Elements are: \n\n");
  for(i=0;i<10;i++)
  {
	printf("%d ",a[i]);
  }
  getch();
}
void insertion(int a[])
{
  int j,n,key,i;
  n=sizeof(a)/sizeof(a[0]);
  for(j=1; j<10;j++)
  {
	key=a[j];
	i=j-1;
  while(i>=0 && a[i]>key)
  {
	a[i+1]=a[i];
	i=i-1;
  }
  a[i+1]=key;
  }
}