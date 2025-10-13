class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string &t:tokens){
            if (t != "+" && t != "-" && t != "*" && t != "/") {
                stk.push(stoi(t)); 
            } else {
                calc(stk, t[0]);
            }
        }

        return stk.top();
    }

      void calc(stack<int> &stk, char opt) {
        int a = stk.top(); stk.pop();
        int b = stk.top(); stk.pop();

        switch (opt) {
            case '+': stk.push(b + a); break;
            case '-': stk.push(b - a); break;
            case '*': stk.push(b * a); break;
            case '/': stk.push(b / a); break;
        }
    }
};