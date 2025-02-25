class Solution {
public:
    bool isPalindrome(string s) {
        string S = "";
        char y;
        for(auto x:s){
            if(isalpha(x) || isdigit(x)){
              if(isalpha(x))
              y = tolower(x);
              else
              y = x;

              S.push_back(y);
            }
        }

        int i = 0;
        int j = S.length()-1;
        while(i<j){
            if(S[i]!=S[j])
            return false;

            i++;
            j--;
        }
        return true;
    }
};