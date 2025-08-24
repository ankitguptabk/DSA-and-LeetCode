class Solution {
public:
    vector<int> maxValue(vector<int>& n) {
        int len = n.size();
        vector<int> leftMax(len), rightMin(len), result(len);

        leftMax[0] =n[0];
        rightMin[len-1] =n[len-1];

        for (int i = 1; i < len; i++) {
            leftMax[i] = max(n[i], leftMax[i - 1]);
        }
        for (int i = len-2; i>= 0;i--) {
            rightMin[i] = min(n[i], rightMin[i + 1]);
        }
        result[len-1] = leftMax[len-1];
        for (int i = len-2; i>= 0; i--) {
            result[i] = leftMax[i];
            if (leftMax[i] > rightMin[i + 1]) {
                result[i] = result[i + 1];
            }
        }

        return result;
    }
};
