#include <iostream>
using namespace std;

 template <typename T>
 class Weight
 {
 private:
    T kg;

 public:
    void setData(T x)
    {
        kg=x;
    }
    T getData()
    {
        return kg;
    }
 };

int main()
{
    Weight <int> obj;
    obj.setData(5);
    cout<<"Value is: "<<obj.getData()<<endl;

    Weight <double> obj2;
    obj2.setData(5.43535);
    cout<<"Value is: "<<obj2.getData()<<endl;

    return 0;
}
