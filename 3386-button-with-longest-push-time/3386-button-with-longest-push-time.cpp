class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& e) {
        unordered_map<int,int>m;
        m[e[0][0]]=e[0][1];
        for(int i=1;i<e.size();i++){
            if(m.find(e[i][0])==m.end() || e[i][1]-e[i-1][1]>m[e[i][0]] ) m[e[i][0]]=e[i][1]-e[i-1][1];
        }
        int answer=e.size()-1;
        vector<int>ans;
        int l=0;
        for(auto &a:m){
            l=max(l,a.second);
        }
        for(auto &a:m){
            if(a.second==l){
                ans.push_back(a.first);
            }
        }
        sort(ans.begin(),ans.end());
        answer=ans[0];
        return answer;
    }
};