class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        long long result = 0;
        vector<bool> marked(n);
        using vip = pair<int,int>;
        priority_queue<vip,vector<vip>,greater<vip>> q;

        for(int i=0;i<n;i++){
            q.emplace(nums[i],i);
        }

        while(!q.empty()){
            auto[x,i] = q.top();
            result = result+x;
            q.pop();

            marked[i] = true;
            if(i-1>=0) marked[i-1] = true;
            if(i+1<n)  marked[i+1] = true;

            while(!q.empty() && marked[q.top().second]) q.pop();
        }

        return result;
        
    }
};