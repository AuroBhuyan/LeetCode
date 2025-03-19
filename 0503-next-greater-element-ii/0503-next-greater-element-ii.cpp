class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int l = nums.size();
        vector<int> ans(l);
        for(int i = l-2;i>=0;i--){
            st.push(nums[i]);
        }

        for(int i=l-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty())
            ans[i] = -1;
            else
            ans[i] = st.top();

            st.push(nums[i]);
        }

        return ans;
    }
};