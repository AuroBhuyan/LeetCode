class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for(auto x:nums){
            currSum = max(x,currSum+x);
            maxSum = max(currSum,maxSum);
        }

        return maxSum;
    }
};