class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 1;
        int l = nums.size();
        while(i<l && j<l){
            if(nums[j]!=nums[j-1]){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }

        return i;
    }
};