#include<iostream>
using namespace std;
int main()
{
    /*
    int a[100];
    a[0]=2;
    a[4]=5;
    cout<<a[0]<<" "<<a[4]<<endl;  */

    //int a[4]={1,2,3,4};    //initialization
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;   //printing values of array


    /* int a[10]={1,2,3,4};
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";   */


    int a[10];
    for(int i=0;i<10;i++){
            a[i]=i*i;
        cout<<a[i]<<" ";
    }
    cout<<endl;


    int b;
    cout<<sizeof(b)<<endl;



    int c[10]={1,2,4};
    cout<<sizeof(c)<<endl;


    return 0;
}
