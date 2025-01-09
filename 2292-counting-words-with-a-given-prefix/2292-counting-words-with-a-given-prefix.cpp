class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c = 0;
        int l = words.size();

        for(int i=0;i<l;i++){
            if(words[i].find(pref)==0)
            c++;
        }

        return c;
    }
};