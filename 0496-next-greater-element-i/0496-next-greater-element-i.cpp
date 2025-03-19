class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> umap;
        int l1 = nums1.size();
        int l2 = nums2.size();
        for(int i=l2-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty())
            umap[nums2[i]] = -1;
            else
            umap[nums2[i]] = st.top();

            st.push(nums2[i]);
        }

        vector<int> ans;
        for(auto x:nums1){
            ans.push_back(umap[x]);
        }

        return ans;
    }
};