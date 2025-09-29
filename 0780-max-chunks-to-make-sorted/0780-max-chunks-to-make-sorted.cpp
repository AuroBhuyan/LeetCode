class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0;
        int preSum = 0;
        int partSum = 0;
        for(int i=0;i<arr.size();i++){
            preSum += i;
            partSum += arr[i];
            if(preSum==partSum){
                count++;
                preSum = 0;
                partSum = 0;
            }
        }

        return count; 
    }
};