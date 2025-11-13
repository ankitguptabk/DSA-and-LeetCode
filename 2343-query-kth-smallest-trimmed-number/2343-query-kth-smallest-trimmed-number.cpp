class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& n, vector<vector<int>>& q) {
        vector<int>ans;
        int k=n[0].size();
        for(int i=0;i<q.size();i++){
            int a=q[i][0];
            int b=q[i][1];
            vector<string>x(n.begin(),n.end());
            vector<pair<string,int>>y;
            for(int j=0;j<x.size();j++){
                x[j]=x[j].substr(k-b,b);
                y.push_back({x[j],j});
            }
            sort(y.begin(),y.end(),[](auto &p1, auto &p2){
                if(p1.first==p2.first) return p1.second<p2.second;
                return p1.first<p2.first;
            });
            ans.push_back(y[a-1].second);
        }
        return ans;
    }
};