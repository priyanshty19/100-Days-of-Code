#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    // C-Style Strings
    char str1[]="ABCD";
    cout<<"String is : "<<str1;
    cout<<endl<<endl;

    char str2[100];
    cout<<"Enter Your Name: "<<endl;
    cin.getline(str2,100);
    cout<<"Name is: "<<str2<<endl;

    // C++ String Class


    string obj;
    cin>>obj;
    getline(cin,obj);
    cout<<"string is: "<<obj<<endl;
    cout<<"String Length: "<<obj.length()<<endl;


    return 0;
}
