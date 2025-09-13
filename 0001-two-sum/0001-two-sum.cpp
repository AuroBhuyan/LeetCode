class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;
        int length = nums.size();
        for(int i=0;i<length;i++){
            int reqNum = target-nums[i];
            if(hashMap.find(reqNum)!=hashMap.end()){
                return {i,hashMap[reqNum]};
            }
            else
            {
                hashMap[nums[i]] = i;
            }
        }

        return {-1,-1};

    }
};