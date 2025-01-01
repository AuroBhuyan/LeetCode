class Solution {
public:
    
    int maxScore(string s) {
        int l = s.size();
        int onec = count(s.begin(),s.end(),'1'); //Prefix sum
        int zeroc = 0;
        
        
        int max = 0;
        for(int i=0;i<l-1;i++){
            if(s[i]=='0')
            zeroc++;
            else
            onec--;

            int temp = zeroc+onec;
            if(temp>max) max=temp;
        }

        return max;
    }
};