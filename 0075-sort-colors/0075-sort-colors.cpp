class Solution {
public:
    void sortColors(vector<int>& nums) {
      int z = 0;
      int o = 0;
      int t = 0;
      for(auto x:nums){
        if(x==0) z++;
        else if(x==1) o++;
        else t++;
      }


      int i=0;
      for(;i<z;i++)
      nums[i] = 0;
      
      for(;i<z+o;i++)
      nums[i] = 1;

      for(;i<z+o+t;i++)
      nums[i] = 2;

    }
};