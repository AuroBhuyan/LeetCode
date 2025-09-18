class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMaxSum = 0;
        int currMinSum = 0;
        int totalSum = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;

        for(auto x:nums){
            totalSum += x;
            currMaxSum = max(x,currMaxSum+x);
            currMinSum = min(x,currMinSum+x);
            maxSum = max(maxSum,currMaxSum);
            minSum = min(minSum,currMinSum);
        }

        if(totalSum==minSum) return maxSum;
        return max(maxSum,totalSum-minSum);
    }
};