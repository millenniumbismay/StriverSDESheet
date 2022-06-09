class Solution {
public:
    
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        else if(x==1.0)
            return 1;
        else
        {
            long long nn = n;
            if(nn<0) nn = -1*nn;
            
            double res = 1.0;
            
            while(nn>0)
            {
                if(nn%2==0)
                {
                    x = x*x;
                    nn/=2;
                }
                else
                {
                    res = res*x;
                    nn -= 1;
                }
            }
            
            if(n<0) res = double(1.0/res);
            
            return res;
        }
    }
};