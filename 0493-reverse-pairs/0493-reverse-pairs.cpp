class Solution {
public:

    int merge(vector<int> &nums,int left, int right){
        vector<int> temp;
        int reversePairsCount = 0;
        int mid = left + (right-left)/2;
        int i = left;
        int j = mid+1;

        int r = mid+1;
        for(int l=left;l<=mid;l++){
            while(r<=right && nums[l]>2ll*nums[r]){
                r++;
            }
            reversePairsCount += r-(mid+1);
        }

        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }

        while(j<=right){
            temp.push_back(nums[j]);
            j++;
        }

        for(int index=0;index<temp.size();index++){
            nums[index+left] = temp[index];
        }

        return reversePairsCount;
    }

    int mergeSort(vector<int>& nums, int left, int right){
        if(left>=right) 
        return 0;

        int mid = left + (right-left)/2;
        int leftReversePairs = mergeSort(nums,left,mid);
        int rightReversePairs = mergeSort(nums,mid+1,right);
        int mergeReversePairs = merge(nums,left,right); 

        return leftReversePairs+rightReversePairs+mergeReversePairs;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};