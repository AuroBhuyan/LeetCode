class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int length = nums.size();
       unordered_set<int> window;

        while(right<length){
            if(right-left>k){
                window.erase(nums[left]);
                left++;
            }

            if(window.find(nums[right])!=window.end()) return true;

            window.insert(nums[right]);
            right++;
        }
        return false;
    }
};