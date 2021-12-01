#include<iostream>
using namespace std;

int main()
{
  char name[100];
  cout<<"Enter your name: ";
  cin.getline(name,100,'o');
  cout<<"Your name is "<<name<<endl;

  return 0;
}
