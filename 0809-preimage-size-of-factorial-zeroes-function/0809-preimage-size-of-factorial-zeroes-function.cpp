#define ll long long
class Solution {
public:

    ll zero(ll n){
        ll count = 0;
        for(ll i=5;i<=n;i*=5){
            count += (n/i);
        }
        return count;
    }
    
    int preimageSizeFZF(int k) {
        ll left = 0;
        ll right = 5ll*k+5;

        while(left<=right){
            ll mid = (left+right)>>1;
            if(zero(mid)==k) return 5;
            else if(zero(mid)>k) right=mid-1;
            else left = mid+1;
        }

        return 0;
    }
};