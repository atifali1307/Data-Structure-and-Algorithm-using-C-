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
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest){
            largest=a[i];
        }
    }

    cout<<"Largest element of above array is: "<<largest<<endl;
    return 0;
}
