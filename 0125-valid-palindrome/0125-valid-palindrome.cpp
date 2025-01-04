class Solution {
public:
    bool isPalindrome(string s) {
       string S;


        int n = s.size();
        for(int i=0;i<n;i++){
            char c = s[i];
            if(isupper(c))
            S.push_back(tolower(c));
            else if(islower(c))
            S.push_back(c);
            else if(isdigit(c))
            S.push_back(c);
        }



        int l=S.size();
        int i=0;
        int j=l-1;
        while(i<=j){
            if(S[i]!=S[j])
            return false;
            i++;
            j--;
        }

        return true;
    }
};