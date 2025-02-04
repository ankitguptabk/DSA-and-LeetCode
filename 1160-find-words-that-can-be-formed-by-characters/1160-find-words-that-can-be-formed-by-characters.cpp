class Solution {
public:
    int countCharacters(vector<string>& w, string c) {
        int ans=0;
        unordered_map<char,int>m;
        for(int i=0;i<c.size();i++){
            m[c[i]]++;
        }
        for(int i=0;i<w.size();i++){
            unordered_map<char,int>mp;
            for(int j=0;j<w[i].size();j++){
                mp[w[i][j]]++;
            }
            bool f=true;
            for(auto & x:mp){
                if(m[x.first]<x.second){
                    f=false;
                }
            }
            if(f) ans+=w[i].size();
        }
        return ans;
    }
};