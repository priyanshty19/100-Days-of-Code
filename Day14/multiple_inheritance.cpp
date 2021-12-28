#include <iostream>
using namespace std;

class A
{
public:
    void printMessage()
    {
        cout<<"Class A print message function"<<endl;
    }
};

class B
{
public:
    void printMessage()
    {
        cout<<"Class B print message function"<<endl;
    }
};

class AB : public A, public B
{
public:
    //void printMessage()
    //{
    //  cout<<"Class AB print message function"<<endl;
    //}

    // To solve the ambiguity
    void printMessage()
    {

        A::printMessage();
        B::printMessage();
        cout<<"Class AB print message"<<endl;

    }


};

int main()
{
    AB obj;
    obj.printMessage();


    return 0;
}

