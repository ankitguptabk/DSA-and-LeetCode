class Solution {
public:
    vector<int> circularPermutation(int n, int s) {
        int len=1<<n;
        len--; //2^n-1
        vector<int>ans(len+1);
        for(int i=0;i<=len;i++){
            int gray=i^(i>>1);
            ans[i]=gray^s;
        }
        return ans;
    }
};