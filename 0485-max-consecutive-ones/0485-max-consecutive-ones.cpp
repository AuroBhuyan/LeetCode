class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int m = 0;
        for(auto x:nums){
            if(1&x)
                c++;
            if(c>m)
                m = c;
            if(x==0)
                c = 0;                   
            }
        
        return m;
    }
};