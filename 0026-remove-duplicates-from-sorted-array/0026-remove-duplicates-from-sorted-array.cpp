class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0,right = 1;
        int length = nums.size();
        while(right<length){
            if(nums[left]!=nums[right]){
                left++;
                swap(nums[left],nums[right]);
                right++;
            }else{
                right++;
            }
        }
         return left+1;
    }
};