class Solution {
public:
    int trap(vector<int>& height) {
         int left = 0,right = height.size()-1;
         int leftMax = 0,rightMax = 0;
         int totalWater = 0;
         while(left<right){
            leftMax = max(leftMax,height[left]);
            rightMax = max(rightMax,height[right]);
            if(leftMax<rightMax){
                totalWater += leftMax-height[left];
                left++;
            }
            else
            {
                totalWater += rightMax-height[right];
                right--;
            }
         }

         return totalWater;
    }
};