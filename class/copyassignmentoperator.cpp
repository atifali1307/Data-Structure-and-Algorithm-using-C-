#include<iostream>
#include "class.cpp"
using namespace std;
int main()
{
  Student s1(10,100);
  Student s2(20,200);
  Student *s3=new Student(30,300);

  s2=s1;  /// copy assignment operator
  *s3=s1;  /// it means copy value of s1 in s3
  s2=*s3;  /// it means copy value of s3 in s2

  delete s3;   ///without this s3 destructor not called.
  return 0;
}
