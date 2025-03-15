class Solution {
public:

int arrange(vector<int> &arr,int l,int h){
    int p = arr[l];
    int i = l;
    int j=h;
    while(i<j){
        while(p>=arr[i] && i<h){
              i++;
        }
        while(p<arr[j] && j>l){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;

}

   void qs(vector<int>& arr,int l,int h){
    if(l<h){
        int pivot = arrange(arr,l,h);
        qs(arr,l,pivot-1);
        qs(arr,pivot+1,h);
    }
   }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        qs(nums,0,n-1);
        return nums;
    }
};