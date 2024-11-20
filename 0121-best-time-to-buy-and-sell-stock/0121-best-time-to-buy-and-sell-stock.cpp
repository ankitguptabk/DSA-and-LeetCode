class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        int min=p[0];
        for(int i=1;i<p.size();i++){
            if(p[i]<min){
                min=p[i];
            }
            else{
                ans=max(ans,p[i]-min);
            }
        }
        return ans;
    }
};