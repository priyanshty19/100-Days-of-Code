// { Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M)
    {
        int i=0;
        int j=0;
        vector<int> v;
        while(i<N && j<M)
        {
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr1[i]==arr2[j])
            {
                if(v.size()==0 || v.back()<arr1[i])
                {
                    v.push_back(arr1[i]);
                }
                j++;
                i++;

            }
            else
            {
                j++;
            }
        }
        return v;

    }

};

// { Driver Code Starts.
/* Driver program to test above function */
int main()
{
    int T;
    cin >> T;

    while(T--){

        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }

        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.printIntersection(arr1, arr2, N, M);

        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }

  return 0;
}
  // } Driver Code Ends
