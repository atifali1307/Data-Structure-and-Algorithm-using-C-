/// class, constructor, this keyword


#include<iostream>
using namespace std;
class Student
{
  int age;
  public :
      ///default constructor
      Student(){
        cout<<"Constructor Called"<<endl;
      }

      ///parameterised constructor

      Student(int rollNumber){
        cout<<"Constructor 2 called"<<endl;
        this->rollNumber=rollNumber;  /// mandatory to use this here
      }

      Student(int a,int r){
        cout<<"this"<<this<<endl;
        cout<<"Constructor 3 called"<<endl;
        age=a;
        rollNumber=r;
      }

  int rollNumber;
  void display(){
    cout<<age<<" "<<rollNumber<<endl;
  }
  int getAge(){
    return age;
  }
  void setAge(int a){
    age=a;
  }

  ~Student(){   /// destructor
    cout<<"Destructor called"<<endl;
  }

};
