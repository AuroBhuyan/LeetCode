class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        int l = 1;
        int r = n-2;
        if(nums[l]!=nums[l-1]) return nums[0];
        if(nums[r]!=nums[r+1]) return nums[n-1];

        while(l<=r){
            int m = l+(r-l)/2;
            if(nums[m]!=nums[m+1] && nums[m]!=nums[m-1]) return nums[m];
            else if((m%2==0 && nums[m]==nums[m+1]) || (m%2==1 && nums[m]==nums[m-1])){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        return -1;
    }
};