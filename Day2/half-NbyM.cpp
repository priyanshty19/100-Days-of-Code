class Solution{
public:
    int mthHalf(int N, int M){
        for(int i=0; i<M-1; i++)
        {
            N=N/2;
        }
        return N;
    }
};
