#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        if(n==1)
        {
            cout<<"Not prime"<<endl;
        }

        else
        {
                bool flag=true;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not prime"<<endl;
        }

        }

    }







    return 0;
}
