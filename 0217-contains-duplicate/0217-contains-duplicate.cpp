class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = nums.size();
        unordered_set<int> uset;
        for(auto i:nums){
            uset.insert(i);
        }
        
        int L = uset.size();
        if(L==l)
        return false;
        else
        return true;

    }
};