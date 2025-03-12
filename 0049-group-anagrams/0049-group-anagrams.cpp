class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;

        for(auto s:strs){
            string ss = s;
            sort(ss.begin(),ss.end());
            hash[ss].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto &pair:hash){
            ans.push_back(pair.second);
        }

        return ans;
    }
};