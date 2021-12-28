#include <iostream>
using namespace std;


class Animal
{
public:
    virtual void eat()
    {
        cout<<"I am eating generic food"<<endl;
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout<<"I'm eating cat food"<<endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout<<"I'm eating dog food"<<endl;
    }
};

void function1(Animal *xyz)
{
    xyz->eat();
}

int main()

{
    Animal *ptr;
    Cat catobj;
    Dog dogobj;

    ptr=&catobj;

    function1(ptr);


    return 0;
}
