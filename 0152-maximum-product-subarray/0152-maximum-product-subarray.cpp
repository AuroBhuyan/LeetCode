class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans  = INT_MIN;
        int l = nums.size();
        int pre = 1;
        int suf = 1;
        for(int i=0;i<l;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;
            pre = pre*nums[i];
            suf = suf*nums[l-i-1];
            ans = max(ans,max(pre,suf));
        }

        return ans;
    }
};