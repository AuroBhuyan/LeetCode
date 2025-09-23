class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int length = nums.size();

        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[length-1]>nums[length-2]) return length-1;

        int left = 1;
        int right = length-2;

        while(left<=right){
            int mid = left+(right-left)/2;

            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]) left = mid+1;
            else right = mid-1;
        }

        return -1;
    }
};