#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool palin(string str, int s, int e)
{
    while(s<e)
    {
        if(str[s]!=str[e])
        {
            return false;
        }
        e--;
        s++;
    }
    return true;

}


int main()

{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        int k;
        string s;
        cin>>n>>k;
        cin>>s;

        bool flag=palin(s,0,n-1);
        if(k==0)
        {
            cout<<1<<endl;
        }
        else
        {
            if(flag)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }





    }
    return 0;

}
