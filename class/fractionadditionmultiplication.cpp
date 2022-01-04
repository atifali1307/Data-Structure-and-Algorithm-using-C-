#include<iostream>
using namespace std;

class Fraction{
  private:
    int numerator;
    int denominator;
  public:
    Fraction(int numerator,int denominator){
      this->numerator=numerator;
      this->denominator=denominator;   ///mandatory to use this here
    }
    void print(){
      cout<<this->numerator<<"/"<<denominator<<endl;
    }

    void add(Fraction const &f2){
      int lcm=this->denominator*f2.denominator; ///this here is optional
      int x=lcm/denominator;   ///this is optional here
      int y=lcm/f2.denominator;
      int num=x*numerator+y*f2.numerator;

      this->numerator=num;   ///optional
      this->denominator=lcm;

      simplify();
    }

    void multiply(Fraction const &f2){
      numerator=numerator*f2.numerator;   ///this is optional here
      denominator=denominator*f2.denominator;
      simplify();
    }

    void simplify(){
      int gcd=1;
      int j=min(this->numerator,this->denominator);  ///this here is optional
      for(int i=1;i<=j;i++)
      {
          if(numerator%i==0 && denominator%i==0)
          {
              gcd=i;
          }
      }                                    /// inbuilt function for gcd is __gcd(a,b);   a,b are two numbers
      numerator=numerator/gcd;              ///int c=gcd(a,b);
      denominator=denominator/gcd;
    }
};

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
  return 0;
}
