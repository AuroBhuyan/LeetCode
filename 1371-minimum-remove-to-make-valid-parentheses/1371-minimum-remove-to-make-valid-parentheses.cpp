class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int pairCount = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                pairCount++;
            else if (s[i] == ')') {
                if (pairCount == 0)
                    s[i] = '*';
                else
                    pairCount--;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(' && pairCount > 0) {
                s[i] = '*';
                pairCount--;
            }
        }

        s.erase(remove(s.begin(),s.end(),'*'),s.end());
        return s;

    }
};