// Array Representation of the Sparse Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
  int sp_matrix[3][3];
  int matrix[3][5]; // size in place of 5
  int size=0,i,j,k=0;
  clrscr();
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&sp_matrix[i][j]);
      if(sp_matrix[i][j]!=0)
	size++;
    }
  }
  matrix[3][size];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(sp_matrix[i][j]!=0)
      {
	matrix[0][k]=i;
	matrix[1][k]=j;
	matrix[2][k]=sp_matrix[i][j];
	k++;
      }
    }
  }
  // Display Final Matrix
  printf("\n\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d ",matrix[i][j]);
      printf("\t");
    }
    printf("\n\n");
  }
  getch();
}