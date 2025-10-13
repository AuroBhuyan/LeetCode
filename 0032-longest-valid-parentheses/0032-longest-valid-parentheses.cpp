class Solution {
public:
    int longestValidParentheses(string s) {
        int leftParenCount = 0;
        int rightParenCount = 0;
        int maxLen = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(') leftParenCount++;
            else rightParenCount++;

            if(leftParenCount==rightParenCount)
            maxLen = max(maxLen,leftParenCount+rightParenCount);
            else if(rightParenCount>leftParenCount){
                leftParenCount = 0;
                rightParenCount = 0;
            }
        }

        leftParenCount = 0;
        rightParenCount = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') leftParenCount++;
            else rightParenCount++;

            if(leftParenCount==rightParenCount)
            maxLen = max(maxLen,leftParenCount+rightParenCount);
            else if(leftParenCount>rightParenCount){
                leftParenCount = 0;
                rightParenCount = 0;
            }
        }

        return maxLen;
    }
};