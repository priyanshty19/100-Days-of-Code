//Method 1

class Solution{
public:
    int isBitSet(int N){

        if(N==0)
        {
            return 0;
        }

        if(N==pow(2,__builtin_popcount(N))-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};


//Method 2
class Solution{
public:
    int isBitSet(int N){

        if(N==0)
        {
            return 0;
        }

        while(N>0)
        {
            if((N&1)==0)
            {
                return 0;
            }
            N=N>>1;
        }
        return 1;

    }
};
