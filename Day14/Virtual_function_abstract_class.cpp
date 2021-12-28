#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout<<"Base class show function called"<<endl;
    }

    virtual void print()
    {
        cout<<"Base class show function called"<<endl;
    }

};


class Derived : public Base
{
    void show()
    {
        cout<<"Derived class show function called"<<endl;
    }

    void print()
    {
        cout<<"Derived class show function called"<<endl;
    }

};

int main()

{
    Base *baseptr;
    Derived obj;

    baseptr=&obj;

    // run time polymorphism
    baseptr->print(); //Derived Class print function was called
    baseptr->show(); // Base Class show function was called



    return 0;
}
