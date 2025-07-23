class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& a) {
        vector<int> ans;
        vector<pair<int,int>> b;
        for(int i=0;i<a.size();i++){
            b.push_back({a[i][0],i});
        }
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            int t=a[i][1];
            int l=0,r=b.size()-1;
            int x=INT_MAX,y=-1;
            while(l<=r){
                int m=(l+r)/2;
                if(b[m].first>=t){
                    x=b[m].first;
                    y=b[m].second;
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