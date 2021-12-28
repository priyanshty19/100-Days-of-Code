#include <iostream>
using namespace std;

class Weight
{
private:
    int kg;
public:
    Weight()
    {
        kg=0;
    }
    Weight(int x)
    {
        kg=x;
    }
    void printWeight()
    {
        cout<<"Weight in KG: "<<kg<<endl;
    }
    Weight operator ++()
    {
        Weight temp;
        temp.kg=++kg;
        return temp;
    }
    void operator ++(int x)
    {
        kg++;
    }
    void operator --()
    {
        --kg;
    }
    void operator --(int x)
    {
        kg--;
    }
};

int main()
{

    Weight w;
    w.printWeight();
    ++w;
    w.printWeight();
    w++;
    w.printWeight();
    --w;
    w.printWeight();
    w--;
    w.printWeight();

    return 0;
}
