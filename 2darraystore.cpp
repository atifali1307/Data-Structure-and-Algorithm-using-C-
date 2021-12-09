#include<iostream>
using namespace std;
void printArray(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
}
int main()
{
   int a[5][100];    // i*c+j  formula is valid if like we pass 100 here upper also 100 should be passed as we have passed.


   int m,n;
   cin>>m>>n;
   for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
       cin>>a[i][j];
     }
   }

   printArray(a,m,n);
   return 0;
}
