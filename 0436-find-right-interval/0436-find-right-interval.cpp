class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int x=INT_MAX;
            for(int j=0;j<a.size();j++){
                if(a[j][0]>=a[i][1]){
                    x=min(x,a[j][0]);
                }
            }
            if(x==INT_MAX){
                ans.push_back(-1);
            }
            else if(x!=INT_MAX){
                for(int j=0;j<a.size();j++){
                    if(x==a[j][0]){
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};