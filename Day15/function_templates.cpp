#include <iostream>
using namespace std;

/* int add(int x, int y)
{
    return (x+y);
}
float add(float x, float y)
{
    return (x+y);
}
double add(double x, double y)
{
    return (x+y);
}
*/

template <typename T>
T add(T x, T y)
{
    return (x+y);
}
int main()
{
    //cout<<"Addition of 2 integers 3 and 4 is: "<<add(3,4);
    cout<<"Addition of 2 integers is: "<<add<int>(3,4);
    cout<<endl;
    cout<<"Addition of 2 floats is: "<<add<float>(3.3f,4.5f);
    cout<<endl;
    cout<<"Addition of 2 doubles is: "<<add<double>(3.345,4.353);


    return 0;
}
