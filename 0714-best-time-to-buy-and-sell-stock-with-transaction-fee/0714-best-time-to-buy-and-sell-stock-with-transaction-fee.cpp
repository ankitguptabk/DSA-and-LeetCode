class Solution {
public:
    int maxProfit(vector<int>& p, int f) {
        int x=0,y=-p[0],ans=0;
        for(int i=1;i<p.size();i++){
            x=p[i];
            y=max(y,ans-x); //hold or buy
            ans=max(ans,y+p[i]-f); //hold or sell
        }
        return ans;
    }
};