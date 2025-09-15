class Solution {
public:

    int gcd(int x,int y){
        while(x){
            int temp = x;
            x = y%x;
            y = temp;
        }
        return y;
    }
    int findGCD(vector<int>& nums) {
        int small = INT_MAX;
        int big = INT_MIN;
        for(auto ele:nums){
            small = min(small,ele);
            big = max(big,ele);
        }

        return gcd(small,big);
    }
};