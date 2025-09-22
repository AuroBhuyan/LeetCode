class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> charFreq(26,0);
        int left = 0;
        int right = 0;
        int length = s.size();
        int maxLen = 0;
        int maxFreq = 0;

        while(right<length){
            charFreq[s[right]-'A']++;
            maxFreq = max(maxFreq,charFreq[s[right]-'A']);
            int winLen = right-left+1;

            if(winLen-maxFreq>k){
                charFreq[s[left]-'A']--;
                left++;
                winLen--;
            }

            maxLen = max(maxLen,winLen);
            right++;
        }

        return maxLen;
    }
};