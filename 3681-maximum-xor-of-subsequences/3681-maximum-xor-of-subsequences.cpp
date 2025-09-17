class Solution {
public:
    int maxXorSubsequences(vector<int>& num) {
        vector<int>basis;
        for(int n:num){
            for(int b:basis){
                n=min(n,n^b);
            }
            if(n>0) basis.push_back(n);
        }
        int ans=0;
        for(int b:basis){
            ans=max(ans,ans^b);
        }
        return ans;
    }
};