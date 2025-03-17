class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=n-1;
        int mn = INT_MAX;
        while(i<=j){
            int m = i+(j-i)/2;
            if(nums[i]<=nums[m]){
               mn = min(mn,nums[i]);
               i = m+1;
            }
            else
            {
                mn = min(mn,nums[m]);
                j = m-1;
            }
        }

        return mn;
    }
};