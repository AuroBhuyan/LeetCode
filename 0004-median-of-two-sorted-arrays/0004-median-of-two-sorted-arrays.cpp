class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int len1 = nums1.size();
        int len2 = nums2.size();
        int i =0,j=0;
        while(i<len1 && j<len2){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<len1){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<len2){
            ans.push_back(nums2[j]);
            j++;
        }

        int len = ans.size();
        double res;
        if(len%2==0){
            res = (ans[len/2]+ans[(len/2)-1])/2.0;
        }else{
            res = (ans[len/2]);
        }

        return res;
    }
};