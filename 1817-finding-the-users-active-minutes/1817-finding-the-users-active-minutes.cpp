class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& l, int k) {
        sort(l.begin(),l.end());
        vector<int>ans(k,0);
        unordered_map<int,int>m;
        for(int i=0;i<l.size();i++){
            int x=l[i][0];
            unordered_set<int>s;
            int j=i;
            for(  ;j<l.size();j++){
                if(l[j][0]==l[i][0]){
                    s.insert(l[j][1]);
                }
                else break;
            }
            m[s.size()]++;
            i=j-1;
        }
        for(auto const &p:m){
                if(p.first<=k){
                    ans[p.first-1]=p.second;
                }
        }
        return ans;
    }
};