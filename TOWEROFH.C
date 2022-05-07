// TOWER of HANOI using Recursion

#include<stdio.h>
#include<conio.h>
void main()
{
  void toh(int,char,char,char);
  int n;
  char a='A',b='B',c='C';
  clrscr();
  printf("Enter Number of Discs: ");
  scanf("%d",&n);
  toh(n,a,b,c);
  getch();
}
void toh(int n,char a,char b,char c)
{
  if(n==1)
    printf("Move Disc from Tower %c to %c\n",a,b);
  else
  {
    toh(n-1,a,c,b);
    printf("Move Disc from Tower %c to %c\n",a,b);
    toh(n-1,c,b,a);
  }
}