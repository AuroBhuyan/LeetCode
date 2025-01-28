class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> ans;
        int l = nums.size();

        int prefix;
        for(int i=0;i<l;i++){
            prefix = target-nums[i];

            if(umap.find(prefix)!=umap.end()){
                ans.push_back(i);
                ans.push_back(umap[prefix]);
            }
            else
            {
                umap[nums[i]] = i;
            }
        

        }

        return ans;

    }
};