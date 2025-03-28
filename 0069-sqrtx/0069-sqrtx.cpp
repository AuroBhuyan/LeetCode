class Solution {
public:
    int mySqrt(int x) {
        long i = 1;
        long j = x;
        long ans = 0;

         if(x==0) return 0;

        while(i<=j){
            long m = i+(j-i)/2;
            if(m*m <= x){
             ans =  max(ans,m);
               i=m+1;
            } 
            else
            {
                j = m-1;
            }

        }
        return ans;
    }
};