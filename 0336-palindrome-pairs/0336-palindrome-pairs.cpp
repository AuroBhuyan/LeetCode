class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> pairs;
        unordered_map<string,int> wordMap;

        for(int i=0;i<words.size();i++){
            wordMap[words[i]] = i;
        }

        for(int i=0;i<words.size();i++){
            string word = words[i];
            for(int j=0;j<=word.size();j++){
                string prefix = word.substr(0,j);
                string suffix = word.substr(j);

                if(isPalin(prefix)){
                    string revSuffix = suffix;
                    reverse(revSuffix.begin(),revSuffix.end());
                    if(wordMap.find(revSuffix)!=wordMap.end() && wordMap[revSuffix]!=i)
                    pairs.push_back({wordMap[revSuffix],i});
                }

                if(j!=word.size() && isPalin(suffix)){
                    string revPrefix = prefix;
                    reverse(revPrefix.begin(),revPrefix.end());
                    if(wordMap.find(revPrefix)!=wordMap.end() && wordMap[revPrefix]!=i)
                    pairs.push_back({i,wordMap[revPrefix]});
                }
            }
        }

        return pairs;

    }

    bool isPalin(string& word){
        int left = 0;
        int right = word.size()-1;
        while(left<=right){
            if(word[left++]!=word[right--]) return false;
        }

        return true;
    }
};