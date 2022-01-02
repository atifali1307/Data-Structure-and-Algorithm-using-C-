#include<iostream>
#include "class.cpp"
using namespace std;
int main(){
  Student s1;
  s1.display();

  Student s2;
  s2.display();

  Student *s3=new Student;
  s3->display();

  cout<<"Parameterised constructor called"<<endl;
  Student s4(10);
  s4.display();

  Student *s5=new Student();
  s5->display();

  Student s6(10,100);
  s6.display();

  cout<<"This Keyword"<<endl;
  Student s7(10,100);
  cout<<"Address of s7  "<<&s7<<endl;

  Student s8(20,200);
  cout<<"Address of s8  "<<&s8<<endl;
  return 0;
}
