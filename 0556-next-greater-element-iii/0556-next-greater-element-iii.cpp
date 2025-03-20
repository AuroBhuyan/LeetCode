class Solution {
public:
    int nextGreaterElement(int n) {
        string s  = to_string(n);
        int l = s.size();
        int p = -1;
        for(int i = l-2;i>=0;i--){
            if(s[i]<s[i+1]){
                p = i;
                break;
            }
        }

        if(p<0) return -1;

        for(int i=l-1;i>=0;i--){
            if(s[i]>s[p]){
                swap(s[i],s[p]);
                break;
            }
        }

        reverse(s.begin()+p+1,s.end());

        long x = stol(s);
        return (x>INT_MAX)?-1:x;
    }
};