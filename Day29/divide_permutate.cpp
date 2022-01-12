#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> st;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x<=n && st.find(x)==st.end())
            {
                st.insert(x);
            }
            else
            {
                while(x>0)
                {
                    if(x<=n && st.find(x)==st.end())
                    {
                        break;
                    }
                    x=x/2;
                }
                if(x!=0)
                {
                    st.insert(x);
                }
            }
        }

        if(st.size()==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }



}
