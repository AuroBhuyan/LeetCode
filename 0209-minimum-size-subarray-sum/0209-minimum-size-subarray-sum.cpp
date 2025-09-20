class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        int left = 0;
        int right = 0;
        int length = nums.size();
        int sum = 0;

        while (right < length) {
            sum += nums[right];
            while (sum >= target) {
                sum -= nums[left];
                minlen = min(minlen, right - left + 1);
                left++;
            }
            right++;
        }
        if (minlen == INT_MAX)
            return 0;
        return minlen;
    }
};