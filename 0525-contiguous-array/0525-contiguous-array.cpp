class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> hash;

        int maxlen = 0;
        int oneCount = 0;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); i++) {

            nums[i] == 0 ? zeroCount++ : oneCount++;

            int diff = oneCount - zeroCount;
            if (!hash.count(diff)) {
                hash[diff] = i;
            }

            if (oneCount == zeroCount) {
                maxlen = max(maxlen, oneCount + zeroCount);
            } else {
                maxlen = max(maxlen, i - hash[diff]);
            }
        }

        return maxlen;
    }
};