class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int S = n* (n+1)/2;
        int s=0;

        for(auto x:nums){
            s+=x;
        }

        return S-s;
    }
};