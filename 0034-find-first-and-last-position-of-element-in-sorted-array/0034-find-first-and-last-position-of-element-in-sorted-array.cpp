class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);

        int i=0;
        int j=nums.size()-1;
        int mid;
        int first = -1;
        while(i<=j){
           mid = i + (j-i)/2;

           if(nums[mid]==target)
           {
            first = mid;
            j = mid-1;
           }

          else if(target<nums[mid])
           j = mid-1;
           else
           i = mid+1;
        }

         i=0;
         j=nums.size()-1;
        int last = -1;
        while(i<=j){
           mid = i + (j-i)/2;

           if(nums[mid]==target)
           {
            last = mid;
            i =mid+1;
           }

          else if(target<nums[mid])
           j = mid-1;
           else
           i = mid+1;
        }

       ans[0] = first;
       ans[1] = last;
       return ans;

    }
};