#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  string s="Atif";
  cout<<s<<endl;
  vector<string> v;    // vector of string behave as 2d array.
  v.push_back(s);
  v.push_back("hello");
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    sort(v[i].begin(),v[i].end());
    cout<<v[i]<<endl;
  }
  string s2;
  getline(cin,s2);   // take input with space also
  cout<<s2<<endl;
  return 0;
}
