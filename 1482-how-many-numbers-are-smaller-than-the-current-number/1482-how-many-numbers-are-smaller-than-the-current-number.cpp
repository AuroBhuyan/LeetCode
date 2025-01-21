class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int l = nums.size();
        unordered_map<int,int> umap;
        vector<int> dummy;
        vector<int> ans(l);

        for(auto x:nums){
            dummy.push_back(x);
        }

        sort(dummy.begin(),dummy.end());

        for(int i=0;i<l;i++){

            if(umap.find(dummy[i])!=umap.end()) continue;
            umap[dummy[i]] = i;
        }
         
        for(int i=0;i<l;i++){
           ans[i] = umap[nums[i]];
        }

        return ans;

    }
};