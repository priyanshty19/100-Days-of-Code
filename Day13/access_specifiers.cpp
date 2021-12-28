#include <iostream>
using namespace std;

class BaseClass
{
public:
    int x;
    BaseClass()
    {
        x=5;
        y=5;
        z=5;

    }
    void printProtectedData()
    {
        cout<<"Y: "<<y<<endl;
    }
    void printPrivateData()
    {
        cout<<"Z: "<<z<<endl;
    }
protected:
    int y;
private:
    int z;
};

class DerivedClass: public BaseClass
{
    /*



    */

};

class DerivedClass2: public DerivedClass
{

};


void OutsideFunction(BaseClass obj)
{
    cout<<"X: "<<obj.x<<endl;
    obj.printProtectedData();
    obj.printPrivateData();
}



int main()
{
    BaseClass obj1;
    DerivedClass obj2;
    cout<<obj2.x<<endl;
//    OutsideFunction(obj1);


    return 0;
}

