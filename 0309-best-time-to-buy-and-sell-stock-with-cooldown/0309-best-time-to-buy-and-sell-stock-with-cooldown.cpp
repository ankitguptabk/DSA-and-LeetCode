class Solution {
public:
    int maxProfit(vector<int>& p) {
        int sold=0,hold=-p[0],cool=0;
        if(p.size()==1) return 0;
        for(int i=0;i<p.size();i++){
            int presell=sold;
            sold=hold+p[i];
            hold=max(hold,cool-p[i]);
            cool=max(cool,presell);
        }
        return max(cool,sold);
    }
};