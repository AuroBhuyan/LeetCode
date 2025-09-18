class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if (arr.size() == 1)
            return 1;

        int left = 0;
        int right = 1;
        int maxLength = 0;

        while (right < arr.size()) {
            if (arr[right] == arr[right - 1]) {
                left++;
            } else if (right == 1 ||
                       (arr[right - 2] < arr[right - 1] &&
                        arr[right - 1] > arr[right]) ||
                       (arr[right - 2] > arr[right - 1] &&
                        arr[right - 1] < arr[right])) {
                // Do nothing
            } else
            {
                left = right-1;
            }

            maxLength = max(maxLength,right-left+1);
            right++;
        }

        return maxLength;
    }
};