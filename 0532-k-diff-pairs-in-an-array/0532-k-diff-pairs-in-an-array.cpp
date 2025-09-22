class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        int count = 0;

        for(int i:nums){
            hash[i]++;
        }

        for(auto x:hash){
            if(k==0){
                if(x.second>1) count++;
            }else{
                if(hash.find(x.first+k)!=hash.end()) count++;
            }
        }

        return count;
    }
};