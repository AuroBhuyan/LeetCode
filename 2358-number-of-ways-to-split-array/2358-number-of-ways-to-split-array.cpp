class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int l = nums.size();

        //prefixsum
        long long sum=0;
        vector<long long> preSum;
        for(int i =0;i<l;i++){
            sum+=nums[i];
           preSum.push_back(sum);
        }


        int c =0;
        for(int i=0;i<l-1;i++){
            if(preSum[i]>=preSum[l-1]-preSum[i])
            c++;
        }
        return c;
    }
};