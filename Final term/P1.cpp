#include<iostream>

using namespace std;

class A
{
private:
     int age;
      string name;
public:

     A()
    {
        cout<<"This is a empty Constructor of A"<<endl;
    }

};
class B : public A
{
public:
    B()
   {
       cout<<"This is a empty constructor"<<endl;
   }
};
class C : public B
{
public:
    C()
    {
        cout<<"This is a empty constructor"<<endl;

    }
};

int main()
{
  C ob1;



}
