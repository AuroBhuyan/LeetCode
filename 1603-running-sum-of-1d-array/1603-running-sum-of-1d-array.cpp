class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int length = nums.size();
        vector<int> sum(length);
        sum[0] = nums[0];
        for(int i=1;i<length;i++){
            sum[i] = nums[i]+sum[i-1];
        }

        return sum;
    }
};