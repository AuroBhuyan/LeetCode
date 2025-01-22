class Solution {
public:
    bool check(vector<int>& nums) {
       int count = 0;
       int l = nums.size();
       for(int i=1;i<l;i++){
        if(nums[i]<nums[i-1]) count++;
       }
       if(nums[0]<nums[l-1]) count++;

       if(count<=1) return true;
       else
       return false;
    }
};