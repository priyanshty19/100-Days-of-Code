#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){

        int h1=0;
        int h2=0;
        int i=0;
        int j=n-1;
        long long int total=0;

        while(i<j)
        {
            if(arr[i]<arr[j])
            {
                h1=max(h1, arr[i]);
                total+=h1-arr[i++];
            }
            else
            {
                h2=max(h2, arr[j]);
                total+=h2-arr[j--];
            }
        }

        return total;

    }
};

// { Driver Code Starts.

int main(){

    int t;
    //testcases
    cin >> t;

    while(t--){
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;

    }

    return 0;
}  // } Driver Code Ends
