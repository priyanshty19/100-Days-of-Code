#include <iostream>

using namespace std;

class Myclass
{
private:
    int x;
    static int count;
    // default constructor
    public:
    Myclass()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
//Initialization
int Myclass::count=0;

int main()
{

    cout<<"Initial Count: "<<Myclass::getCount();
    cout<<endl<<endl;
    Myclass obj1; // default constructor is called
    cout<<"Count after one Object: "<<Myclass::getCount();


    return 0;
}
