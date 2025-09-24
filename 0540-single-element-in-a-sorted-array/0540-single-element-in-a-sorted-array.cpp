class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int left = 1;
        int right = n-2;

       if(n==1) return nums[0];
       if(nums[left]!=nums[left-1]) return nums[0];
       if(nums[right]!=nums[right+1]) return nums[right+1];

        

        while(left<=right){
            int mid = left+(right-left)/2;

            if(nums[mid]!= nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            else if((mid%2==0 && nums[mid]==nums[mid-1])||(mid%2==1 && nums[mid]==nums[mid+1])) right = mid-1;
            else left = mid+1;
        }

        return -1;
    }
};