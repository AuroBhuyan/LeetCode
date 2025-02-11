class Solution {
public:

    string countAndSay(int n) {
        if(n==1) return "1";

        string s =  countAndSay(n-1);
        s = s+"@";
        string r = "";
        int l = s.size();
        int c=1;
        for(int i=1;i<l;i++){
           if(s[i-1]==s[i]){
            c++;
           }else
           {
             r = r+to_string(c)+s[i-1];
             c = 1;
           }
        }
        return r;
    }
};