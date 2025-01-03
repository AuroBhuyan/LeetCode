class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long leftSum=0;
        long long rightSum=0;
        int l = nums.size();
        int count=0;

        for(int i=0;i<l;i++){
            rightSum+=nums[i];
        }

        for(int i=0;i<l-1;i++){
            leftSum+=nums[i];
            rightSum-=nums[i];
            if(leftSum>=rightSum)
            count++;
        }

        return count;
    }
};