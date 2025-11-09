class Solution {
public:
    int minMoves(vector<int>& n) {
        int ans=0,a=INT_MIN;
        for(int x:n) a=max(a,x);
        for(int x:n) ans+=a-x;
        return ans;
    }
};