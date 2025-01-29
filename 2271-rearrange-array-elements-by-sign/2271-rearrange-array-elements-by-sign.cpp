class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        int l = nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        
        int p = 0;
        int n = 0;
        for(int i=0;i<l;i++){
            if(i&1) 
            {
                nums[i] = neg[n];
                n++;
            }
            else
            {
                nums[i] = pos[p];
                p++;
            }
        }

        return nums;

    }
};