#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i]; // a temperature expressed as an integer ranging from -273 to 5526
    }

    int k;

    for(int i=0; i<n; i++)
    {
        if(a[i]>=0 && k>a[i] || a[i]<=0 && k<a[i] || a[i]>0 && k<=-a[i] || a[i]<0 && k>-a[i])
        {
            k=a[i];
        }
    }
    if(n==0)
    {
        k=0;
    }
    cout<<k<<endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}
