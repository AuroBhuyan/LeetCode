class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> result(temps.size(),0);
        stack<int> stk;

        for(int i=0;i<temps.size();i++){
            while(!stk.empty() && temps[stk.top()]< temps[i]){
                result[stk.top()] = i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return result;
    }
};