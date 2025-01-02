class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prefix;
        int lw = words.size();
        int lq = queries.size();

        int c=0;
        for(int i=0;i<lw;i++){
            int l = words[i].size();
            char x = words[i][0];
            char y = words[i][l-1];
            if((x=='a' || x=='e' || x=='i' || x=='o' || x=='u') && (y=='a' || y=='e' || y=='i' || y=='o' || y=='u'))
            c++;
             
            
            prefix.push_back(c);
        }





        for(int i=0;i<lq;i++){
            int a = queries[i][0];
            int b = queries[i][1];

            if(a>0)
            ans.push_back(prefix[b]-prefix[a-1]);
            else
            ans.push_back(prefix[b]);
        }

        return ans;
    }
};