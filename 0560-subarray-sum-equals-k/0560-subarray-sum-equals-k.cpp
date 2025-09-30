class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        int prefixSum = 0;
        int subArrCount = 0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int diff = prefixSum - k;

            if(k==prefixSum) subArrCount++;

            if(hash.find(diff)!=hash.end()){
                subArrCount += hash[diff];
            }

            hash[prefixSum]++;
        }

        return subArrCount;
    }
};