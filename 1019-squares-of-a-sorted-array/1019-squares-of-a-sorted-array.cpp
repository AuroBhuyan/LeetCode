class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int index = nums.size()-1;
        vector<int> ans(nums.size());
        while(left<=right){
            int leftSquare = nums[left]*nums[left];
            int rightSquare = nums[right]*nums[right];
            if(leftSquare>rightSquare)
            {
                ans[index--]=leftSquare;
                left++;
            }
            else{
                ans[index--]=rightSquare;
                right--;
            }
        }
        return ans;
    }
};