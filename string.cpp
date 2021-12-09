#include<iostream>
using namespace std;
int main()
{
  string s="abc";
  cout<<s<<endl;
  string s2;
  s2="def";
  cout<<s2<<endl;

  string *sp=new string;
  *sp="mno";
  cout<<sp<<endl;
  cout<<*sp<<endl;
  return 0;
}
