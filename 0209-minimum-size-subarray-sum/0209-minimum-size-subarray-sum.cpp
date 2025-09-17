class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int length = nums.size();
        int left = 0;
        int right = 0;

        int totalSum = 0;
        while(right<length){

            totalSum += nums[right];

            while(totalSum >= target){
                minLen = min(minLen,right-left+1);
                totalSum -= nums[left];
                left++;
            }
                right++; 
        }
        if(minLen==INT_MAX) return 0;
        return minLen;

    }
};
