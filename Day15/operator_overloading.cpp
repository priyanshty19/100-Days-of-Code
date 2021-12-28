#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }

    void print()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    // operator overloading syntax
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

};



int main()
{

    Complex c1(3,4);
    Complex c2(1,2);
    Complex c3;
    c3=c1+c2;

    c3.print();
    return 0;
}
