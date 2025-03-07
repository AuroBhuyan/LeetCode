class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        s = s+s;
        int n = s.size();
        int m = goal.size();
        vector<int> lps(m,0);
        int l=0;
        int i=1;
        
        //lps
        while(i<m){
            if(goal[i]==goal[l]){
                l++;
                lps[i] = l;
                i++;
            }
            else{
                if(l!=0){
                    l=lps[l-1];
                }
                else
                {
                    i++;
                }
            }
        }
        
        
        //kmp
        i = 0;
        int j = 0;
        
        while(i<n){
            if(s[i]==goal[j]){
                i++;
                j++;
            }
            if(j==m){
                return true;
            }
            else if(i<n && s[i]!=goal[j]){
                if(j!=0){
                    j = lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        
        return false;
        
    }
};