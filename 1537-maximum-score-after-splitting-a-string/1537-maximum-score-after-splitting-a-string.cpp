class Solution {
public:
    string S;
    int countzero(int l,int h){
        int c=0;
        for(int i=l;i<=h;i++){
           if(S[i]=='0')
           c++;
        }

        return c;
    }

    int countone(int l,int h){
        int c=0;
        for(int i=l;i<=h;i++){
           if(S[i]=='1')
           c++;
        }

        return c;
    }
    
    int maxScore(string s) {
        S=s;
        int l = s.size();
        
        int m=0;
        int max =0;
        while(m<l-1){
         int temp = countzero(0,m)+countone(m+1,l-1);
         if(temp>max) max=temp;

         m++;
        }

        return max;
    }
};