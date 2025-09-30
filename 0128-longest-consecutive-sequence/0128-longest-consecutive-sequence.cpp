class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int maxLen = 0;
        int seqLen;
        int startEle;

        for (int x : uset) {
            if (uset.find(x - 1) == uset.end()) {
                startEle = x;
                seqLen = 1;
                while (uset.find(startEle+1) != uset.end()) {
                    startEle++;
                    seqLen++;
                }
                maxLen = max(seqLen, maxLen);
            }
        }

        return maxLen;
    }
};