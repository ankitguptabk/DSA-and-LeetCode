class Solution {
public:
    string findCommonResponse(vector<vector<string>>& res) {
        unordered_map<string,int>m;
        vector<vector<unordered_set<string>>> r(res.size());
        for(int i=0;i<res.size();i++){
            unordered_set<string>s(res[i].begin(),res[i].end());
            r[i].push_back(s);
        }
        for(int i=0;i<r.size();i++){
            for(int j=0;j<r[i].size();j++){
                for(auto x:r[i][j]){
                    m[x]++;
                }
            }
        }
        int b=INT_MIN;
        string ans="zzzzzzzzzz";
        for (const auto& a : m){
            if (a.second > b || (a.second == b && a.first<ans)) {
                b = a.second;
                ans = a.first;
            }
        }
        return ans;
    }
};