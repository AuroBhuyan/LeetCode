class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rs = 0;
        int ls = 0;

        for(auto x:nums){
            rs+=x;
        }

        for(int i=0;i<nums.size();i++){
            if(i!=0) ls += nums[i-1];
            rs -= nums[i];

            if(rs==ls) return i;
         }

         return -1;
    }
};