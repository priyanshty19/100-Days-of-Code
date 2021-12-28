#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void getArea()=0; //Pure Virtual Function
};

class Circle : public Shape
{
public:
    void getArea()
    {
        cout<<"Enter Radius of Circle :"<<endl;
        int r;
        cin>>r;

        cout<<"Area of Circle: "<<(3.14*r*r);
    }
};

class Rectangle : public Shape
{
public:
    void getArea()
    {
        cout<<"Enter Length: "<<endl;
        int l;
        cin>>l;
        cout<<"Enter Breadth: "<<endl;
        int b;
        cin>>b;
        cout<<"Area of rectangle is: "<<(l*b);
    }
} ;
int main()

{

    Circle c1;
    c1.getArea();
    cout<<endl<<endl;
    Rectangle rec;

    rec.getArea();

}
