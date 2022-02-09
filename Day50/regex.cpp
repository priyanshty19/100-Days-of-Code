#include <bits/stdc++.h>
#include <regex>
using namespace std;

bool check_end(string s)
{
    string t="@gmail.com";
    if(s.size()<t.size())
    {
        return false;
    }
    for(int i=s.size()-1; i>=0; i--)
    {
        for(int j=t.size(); j>=0; j--)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
    }
    return true;

}


int main()
{

    int t;
    cin>>t;
    vector<string> st;
    regex e(".+@gmail\\.com$");

    while(t--)
    {
        string firstName;
        string email;
        cin>>firstName>>email;

        if(regex_match(email,e))
        {
            st.push_back(firstName);
        }

    }
    sort(st.begin(), st.end());

    for(int i=0; i<st.size(); i++)
    {
        cout<<st[i]<<endl;
    }






    return 0;
}

