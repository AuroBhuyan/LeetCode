class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        set<int> uset;
        for(int i=0;i<l;i++){
            uset.insert(nums[i]);
        }
        
        int c = uset.size();
        int i=0;
        for(auto x:uset){
         nums[i] = x;
         i++;
        }

        return c;
    }
};