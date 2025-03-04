class Solution {
public:
    bool canJump(vector<int>& nums) {
        int d = 0;
        for(int i=0;i<nums.size();i++){

            if(i>d) return false;
            d = max(d,i+nums[i]);
            if(d>=nums.size()-1)
             return true;
        }

        return true;
    }
};