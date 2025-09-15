class Solution {
public:

    int gcd(int a,int b){
        while(a){
            int temp = a;
            a = b%a;
            b = temp;
        }
        return b;
    }

    int findGCD(vector<int>& nums) {
        int small = INT_MAX;
        int large = INT_MIN;
        for(auto num:nums){
            small = min(small,num);
            large = max(large,num);
        }

        return gcd(small,large);
    }
};