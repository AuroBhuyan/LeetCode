class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N<0){
            N = -N;
            x = 1/x;
        }
        
        double pow = 1.0;
        while(N){
          if(N&1){
            pow *= x;
          }
          x *= x;
          N>>=1;
        }

        return pow;
    }
};