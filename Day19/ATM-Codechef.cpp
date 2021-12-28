#include <iostream>
using namespace std;
int main()
{
    int w;
    float bl;
    cin>>w>>bl;
    float difference;

    if(w%5==0 && w<=bl)
    {
        difference=bl-w-0.5;
    }
    else
    {
        difference=bl;
    }

    cout<<difference<<endl;
    return 0;
}
