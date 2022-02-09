#include <iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            n-=n%10;
            n+=9;
            n-=n%7;
            cout<<n<<endl;
        }
    }


    return 0;
}
