#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET=b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%BUCKET;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i=key%BUCKET;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i=key%BUCKET;
        for(auto x:table[i])
        {

            if(x==key)
            {
                return true;
            }

        }
        return false;

    }
    void display()
    {
        for(int i=0; i<BUCKET; i++)
        {
            cout<<i;
            for(auto x : table[i])
            {
                cout<<" --> "<<x;
            }
            cout<<endl;
        }

    }

};

int main()
{

    MyHash h(7);
    int a[]={15,21,11,27,8,12};
    int n=6;

    for(int i=0; i<n; i++)
    {
        h.insert(a[i]);
    }

    h.remove(12);
    h.display();



    return 0;
}
