class Solution {
  public:
    long long int leftShops(long long int i, long long int L){
        int N=0;
        N=pow(2,L);

        return N-i;

    }
};
