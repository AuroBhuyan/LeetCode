class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        int right = k;
        int length = arr.size();
        int count = 0;
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        if (sum / k >= threshold)
            count++;

        while (right < length) {

            sum += arr[right] - arr[left];
            if (sum / k >= threshold)
                count++;
            left++;
            right++;
        }

        return count;
    }
};