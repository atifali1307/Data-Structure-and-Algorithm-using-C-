#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] ";
        cin>>a[i];
    }
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"Smallest element of above array is: "<<smallest<<endl;
    return 0;
}
