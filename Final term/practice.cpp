#include<iostream>

using namespace std;

class Pet
{
//protected:
    //string Name;
public:
    //Pet(string n ) {Name = n; }
    void MakeSound(void)
    {
      cout<< "The Pet says Shh! Shh!"<<endl;
    }
};


class Cat
{
//protected:
    //int storage;
public:
    void MakeSound(void)
  {cout<< "The Cat says Meow Meow"<<endl;}

};
class Dog
{
public:
    void MakeSound(void)
    {
        cout<< "The Dog says Woof Woof" <<endl;
    }
};


int main(void)
{

 Pet *a_pet = new Pet();
 Cat *a_cat = new Cat();
 Dog *a_dog = new Dog();
 a_pet ->MakeSound();
 a_dog ->MakeSound();
 a_cat ->MakeSound();
 static_cast<Pet *>(a_pet) -> MakeSound();
 return 0;
}
