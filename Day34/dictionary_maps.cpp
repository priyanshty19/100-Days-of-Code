#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    map<string, long> mp;
    int n;
    cin>>n;
    long num;
    string name;
    for(int i=0; i<n; i++)
    {

        cin>>name;
        cin>>num;
        mp[name]=num;
    }
    while(cin>>name)
    {
        if(mp.find(name)!=mp.end())
        {
            cout<<name<<"="<<mp.find(name)->second<<endl;
        }
        else {
            cout<<"Not found"<<endl;
        }
    }



    return 0;
}
