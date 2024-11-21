class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>>a;
        unordered_map<string, vector<string>>m;
        for(auto s:str){
            string key=s;
            sort(key.begin(),key.end());
            m[key].push_back(s);
        }
        for(auto & group:m){
            a.push_back(group.second);
        }
        return a;
    }
};