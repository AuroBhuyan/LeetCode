class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l = strs.size();
        string ans = strs[0];

        for(int i=0;i<l;i++){
            while(strs[i].find(ans)!=0){
                ans.pop_back();
                if(ans == "") return ans;
            }
        }

        return ans;
    }
};