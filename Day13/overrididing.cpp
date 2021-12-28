#include <iostream>
using namespace std;

 class Animal
 {
 public:
    void makeSound()
    {
        cout<<"Animal's Sound";
    }

 };

 class Dog : public Animal
 {
 public:
    void makeSound()
    {
        cout<<"Dog Barks";
    }
 };

 class Cat: public Animal
 {
 public:
    void makeSound()
    {
        cout<<"Cat Meows";
    }
 };



int main()
{

    Animal a1;
    a1.makeSound();
    cout<<endl;

    Dog d1;
    d1.makeSound();

    cout<<endl;

    Cat c1;
    c1.makeSound();

    cout<<endl;

    return 0;
}
