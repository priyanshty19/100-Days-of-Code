#include <iostream>
using namespace std;

class Base
{
protected:
    int val;
};

class Derived1 : virtual public Base
{
public:
    Derived1()
    {
        val=1;
    }
    void getValue()
    {
        cout<<"Derived 1 value : "<<val<<endl;
    }
};

class Derived2 : virtual public Base
{
public:
    Derived2()
    {
        val=2;
    }
    void getValue()
    {
        cout<<"Derived 2 value : "<<val<<endl;
    }
};

class Derived3 : public Derived1, public Derived2
{
public:
    void getValue()
    {
        cout<<"Int value is: "<<endl;
        Derived1::getValue();
    }

};

int main()
{
    Derived3 obj;
    obj.getValue();

    return 0;
}
