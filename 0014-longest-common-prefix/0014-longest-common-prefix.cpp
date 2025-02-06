class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l = strs.size();
        string pre = strs[0];
        
        for(auto x:strs){
            while(x.find(pre)!=0){
                pre.pop_back();
                if(pre == "") return pre;
            }
        }

        return pre;
    }
};