class Solution {
public:
    int hammingWeight(int n) {
        int x = n;
        int c =0;
        while(x){
          if(x&1) c++;
          x = x>>1;
        }
        return c;
    }
};