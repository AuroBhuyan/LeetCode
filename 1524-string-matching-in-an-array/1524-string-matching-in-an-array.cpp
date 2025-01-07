class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> ans;
        vector<string> a;
        int l = words.size();

        for(int i=0;i<l;i++){
           for(int j=0;j<l;j++){
               if(i==j) continue;
               if(words[j].find(words[i])!=string::npos){
                 ans.insert(words[i]);
               }
           }
        }


        for(auto i:ans)
           a.push_back(i);

           return a;
    }
};