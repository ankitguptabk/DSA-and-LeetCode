class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        string ans="";
        unordered_map<string,int>m;
        for(int i=0;i<p.size();i++){
            m[p[i][1]]++;
        }
        vector<string>s;
        for(auto x:m){
            if(x.second==1){
                s.push_back(x.first);
            }
        }
        for(int i=0;i<s.size();i++){
            bool f=true;
            for(int j=0;j<p.size();j++){
                if(s[i]==p[j][0]){
                    f=false;
                    break;
                }
            }
            if(f) return s[i];
        }
        return s[0];
    }
};