class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxVolume = 0;
        while(left<right){
            int minLine = min(height[left],height[right]);
            maxVolume = max(maxVolume,minLine*(right-left));
            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxVolume;
    }
};