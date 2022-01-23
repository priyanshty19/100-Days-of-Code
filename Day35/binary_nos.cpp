#include <bits/stdc++.h>

using namespace std;


string to_binary(int n)
{
    string bin="";
    int rem=n%2;

    while(n!=0)
    {
        if(n%2==0)
        {
            bin+="0";
        }
        else
        {
            bin+="1";
        }
        n=n/2;
    }
    return bin;
}


int main()
{

    int n;
    cin>>n;
    string r=to_binary(n);
    int size=r.length();
    int max=0;
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(r.substr(i,1)=="1")
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=0;
        }
    }

    cout<<max<<endl;

    return 0;

}


