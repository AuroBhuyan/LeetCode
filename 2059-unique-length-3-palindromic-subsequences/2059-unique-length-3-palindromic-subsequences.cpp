class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int l = s.length();
        unordered_map<char,pair<int,int>> umap;

        for(int i=0;i<l;i++){
            if(umap.find(s[i])==umap.end())
            umap[s[i]].first = umap[s[i]].second = i;
            else
            umap[s[i]].second = i;
        }

        int ct=0;
        for(auto [c,se]: umap){
            if(se.first == se.second) continue;
            ct+=unordered_set<char>(s.begin()+se.first+1,s.begin()+se.second).size();
        }

        return ct;        
        
    }
};