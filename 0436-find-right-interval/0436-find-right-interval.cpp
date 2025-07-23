class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& a) {
        vector<int> ans;
        vector<pair<int,int>> start;
        for(int i=0;i<a.size();i++){
            start.push_back({a[i][0],i});
        }
        sort(start.begin(),start.end());
        for(int i=0;i<a.size();i++){
            int t=a[i][1];
            int l=0,r=start.size()-1;
            int x=INT_MAX,y=-1;
            while(l<=r){
                int m=(l+r)/2;
                if(start[m].first>=t){
                    x=start[m].first;
                    y=start[m].second;
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(x==INT_MAX) ans.push_back(-1);
            else ans.push_back(y);
        }
        return ans;
    }
};