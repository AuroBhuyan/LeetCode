class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;

            if(nums[m]==target) return true;

            if(nums[l]==nums[m] && nums[m]==nums[r]){
                l = l+1;
                r = r-1;
                continue;
            }
            
            if(nums[l]<=nums[m]){
                if(nums[l]<=target && target<=nums[m]){
                    r = m;
                }
                else
                {
                    l = m+1;
                }
            }
            else
            {
                if(nums[m]<=target && target<=nums[r]){
                    l = m;
                }
                else
                {
                    r = m-1;
                } 
            }
        }
        return false;
    }
};