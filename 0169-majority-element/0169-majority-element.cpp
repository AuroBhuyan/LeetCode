class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int max;
        for(auto x:nums){
            if(count==0) max = x;
            count+= (x==max)? 1:-1;
        }

        return max;
    }
};