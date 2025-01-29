class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = nums.size();
        unordered_map<int,int> umap;

        int prefix = 0;
        int c = 0;
        for(int i=0;i<l;i++){
            prefix+=nums[i];
            int x = prefix-k;

            if(k == prefix) c++;

            if(umap.find(x)!=umap.end()){
                c+=umap[x];
            }
            umap[prefix]++;

        }
        return c;
    }
};