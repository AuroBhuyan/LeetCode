class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int length = nums.size();
        int pivot = -1;
        
        for(int i=length-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }

        if(pivot==-1) {
            reverse(nums.begin(),nums.end());
        }else{
            for(int i=length-1;i>=0;i--){
                if(nums[i]>nums[pivot]){
                    swap(nums[i],nums[pivot]);
                    break;
                }
            }
            reverse(nums.begin()+pivot+1,nums.end());
        }

        
    }
};