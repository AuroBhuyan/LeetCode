class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int l = 0;
        int maxf = 0;
        int maxw = 0;

        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;

            maxf = max(maxf,freq[s[r]-'A']);
            int winl = r-l+1;

            if(winl-maxf>k){
                freq[s[l]-'A']--;
                l++;
                winl = r-l+1;
            }
            
            
            maxw = max(maxw,winl);
        }

        return maxw;
    }
};