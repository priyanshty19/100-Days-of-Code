#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,nums;
    cin>>n;

    vector<int> v;

    while(cin>>nums)
    {
        v.push_back(nums);
    }

    sort(v.begin(),v.end());

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
