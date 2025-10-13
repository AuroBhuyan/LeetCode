class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        int maxLen = 0;

        for(int i=0;i<s.size();i++){
            if(!stk.empty() && s[i]==')' && s[stk.top()]=='(')
            stk.pop();
            else
            stk.push(i);
        }

        int index = s.length();
        while(!stk.empty()){
            int i = stk.top();
            stk.pop();
            maxLen = max(maxLen,index-i-1);
            index = i;
        }

        maxLen = max(maxLen,index);
        return maxLen;
    }
};