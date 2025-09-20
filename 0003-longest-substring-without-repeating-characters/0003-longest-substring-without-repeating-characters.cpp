class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int length = s.size();
        unordered_map<char,int> dupPos;
        int maxlen = 0;

        while(right<length){

            if( dupPos.find(s[right])!=dupPos.end()){
                left = max(left,dupPos[s[right]]+1);
            }
            
            maxlen = max(maxlen,right-left+1);
            dupPos[s[right]] = right;
            right++;
        }

        return maxlen;

    }
};