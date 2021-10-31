class Solution {
  public:
    long long int sumOfTheSeries(long long int n){
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            sum+=i*i;
        }
        return sum;
    }

};

