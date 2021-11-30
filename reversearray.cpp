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
    /// normal left to right
    cout<<"Normal Array."<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    ///reverse order right to left
    cout<<"Reverse of Array";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
