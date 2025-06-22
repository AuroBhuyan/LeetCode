class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ml = 0, len = 0, l = 0, r = 0,mz = 0;
        int n  = nums.size();
        while(r<n){
            if(nums[r]==0)mz++;
            if(mz>k){
                if(nums[l]==0){
                    mz--;
                }
                l++;
            }
            if(mz<=k){
                len = r-l+1;
                ml = max(ml,len);
            }
            r++;
        }

        return ml;
    }
};