class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0,a=costs.size()/2,b=costs.size()/2;
        sort(costs.begin(),costs.end(),[](vector<int>&x,vector<int>&y){
            return abs(x[0]-x[1])>abs(y[0]-y[1]);
        });
        for(int i=0;i<costs.size();i++){
            if(a>0 && b>0){
                if(costs[i][0]<costs[i][1]){
                    ans+=costs[i][0];
                    a--;
                }
                else{
                    ans+=costs[i][1];
                    b--;
                }
            }
            else if(a>0 && b==0){
                ans+=costs[i][0];
                a--;
            }
            else if(b>0 && a==0){
                ans+=costs[i][1];
                b--;
            }
        }
        return ans;
    }
};