class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> S;
        stack<int> T;

        for(char c:s){
            if(c=='#'){
                if(!S.empty()) S.pop();
            }else{
                S.push(c);
            }
        }

        for(char c:t){
            if(c=='#'){
                if(!T.empty()) T.pop();
            }else{
                T.push(c);
            }
        }

        string newS;
        string newT;

        while(!S.empty()){
            newS += S.top();
            S.pop();
        }

        while(!T.empty()){
            newT += T.top();
            T.pop();
        }

        return newS==newT;
    }
};