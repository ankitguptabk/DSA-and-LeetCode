class Solution {
public:
    int maxProfit(vector<int>& p) {
        int min=p[0];
        int profit=0;
        for(int i=1;i<p.size();i++){
            if(p[i]<min){
                min=p[i];
            }
            else{
                profit=max(profit,p[i]-min);
            }
        } return profit;
    }
};