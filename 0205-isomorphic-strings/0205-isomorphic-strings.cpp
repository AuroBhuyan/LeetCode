class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ms,mt;
        if(s.size()!=t.size()) return false;

        int l = s.size();
        for(int i=0;i<l;i++){
            if(ms.count(s[i]) && ms[s[i]]!=t[i]) return false;
            if(mt.count(t[i]) && mt[t[i]]!=s[i]) return false;

            ms[s[i]] = t[i];
            mt[t[i]] = s[i];
        }
        
        return true;
    }
};