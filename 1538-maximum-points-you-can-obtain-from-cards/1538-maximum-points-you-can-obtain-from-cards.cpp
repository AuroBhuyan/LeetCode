class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ls = 0;
        int rs = 0;
        for(int i=0;i<k;i++) ls+=cardPoints[i];
        int ms = ls;
        int ri = n-1;
        int li = k-1;
        while(k--){
            ls -= cardPoints[li];
            rs += cardPoints[ri];
            ri--;
            li--;
            ms = max(ms,ls+rs);
        }

        return ms;
    }
};