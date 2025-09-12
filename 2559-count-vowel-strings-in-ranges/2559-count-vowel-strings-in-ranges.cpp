class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        vector<int>ans;
        unordered_set<char>v={'a','e','i','o','u'};
        vector<int>pref(w.size()+1,0);
        for(int i=0;i<w.size();i++){
            char x=w[i][0],y=w[i][w[i].size()-1];
            int add=0;
            if(v.find(x)!=v.end() && v.find(y)!=v.end()){
                add=1;
            }
            pref[i+1]=pref[i]+add;
        }
        for(int i=0;i<q.size();i++){
            int l=q[i][0], r=q[i][1];
            ans.push_back(pref[r+1]-pref[l]);
        }
        return ans;
    }
};