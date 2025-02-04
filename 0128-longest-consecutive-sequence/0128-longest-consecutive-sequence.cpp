class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;

        for(auto x:nums){
            uset.insert(x);
        }

        int mx = 0;
        for(auto x:uset){
            if(uset.find(x-1)==uset.end()){
                int ele = x;
               int c = 1;
               while(uset.find(ele+1)!=uset.end()){
                ele++;
                c++;
               }
               mx = max(mx,c);
            }
        }

        return mx;
    }
};