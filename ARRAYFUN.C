#include<stdio.h>
#include<conio.h>
void main()
{int a[10];
 void inputarray(int [],int);
 void outputarray(int [],int);

 printf("Enter values here");
 inputarray(a,10);
 printf("output is:");
 outputarray(a,10);
 getch();
 }
 void inputarray(int b[],int size)
 {int i;
  for(i=0;i<size;i++)
  {scanf("%d",&b[i]);
   }
  }
 void outputarray(int b[],int size)
 {int i;
  for(i=0;i<size;i++)
  {printf("%d\t",b[i]);
   }
  }