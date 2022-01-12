#include <iostream>
using namespace std;


int main()
{
    long long int t;
    cin>>t;
    long long int reverse_num=0;
    long long int rem=1;
     while(t--)
     {
        long long int n;
        cin>>n;

        while(n>0)
        {
            rem=n%10;
            reverse_num=reverse_num*10+rem;
            n=n/10;
        }
        cout<<reverse_num<<endl;
        reverse_num=0;
     }

    return 0;
}
