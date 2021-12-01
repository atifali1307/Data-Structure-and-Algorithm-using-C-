#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Yout name is "<<name<<endl;
    cout<<"Length: "<<length(name);
    return 0;
}
