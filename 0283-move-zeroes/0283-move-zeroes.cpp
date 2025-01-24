class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc=0;
        for(auto x:nums){
            if(x==0) zc++;
        }

        int l=nums.size();
        int j=0;
        for(int i=0;i<l;i++){
            if(nums[i]==0) continue;
            nums[j] = nums[i];
            j++;
        }

        for(int i=l-zc;i<l;i++){
            nums[i] = 0;
        }
    }
};