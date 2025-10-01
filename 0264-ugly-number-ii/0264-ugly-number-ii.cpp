class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> uglyNum;
        uglyNum.push_back(1);

        int i2 = 0;
        int i3 = 0;
        int i5 = 0;

        while (uglyNum.size() < n) {
            int mul2 = uglyNum[i2]*2;
            int mul3 = uglyNum[i3]*3;
            int mul5 = uglyNum[i5]*5;
            int minMul = min(mul2,min(mul3,mul5));
            uglyNum.push_back(minMul);

            if(mul2==minMul) i2++;
            if(mul3==minMul) i3++;
            if(mul5==minMul) i5++;
        }

        return uglyNum.back();
    }
};