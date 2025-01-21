class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int l = nums.size();
        vector<int> precal(l+1,0);
        vector<int> ans;

        for(auto x:nums){
            precal[x]++;
        }

        for(int x=1;x<=l;x++){
            if(precal[x]==0) ans.push_back(x);
        }

        return ans;
    }
};