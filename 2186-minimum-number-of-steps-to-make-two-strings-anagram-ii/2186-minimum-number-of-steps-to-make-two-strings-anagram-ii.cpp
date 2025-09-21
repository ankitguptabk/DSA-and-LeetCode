class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m,n;
        for(char c:s) m[c]++;
        for(char c:t) n[c]++;
        for(int i=0;i<s.size();i++){
            if(n.find(s[i])!=n.end()){
                m[s[i]]=abs(m[s[i]]-n[s[i]]);
                n[s[i]]=0;
            }
        }
        int ans=0;
        for(auto const &p:m){
            ans+=p.second;
        }
        for(auto const &p:n){
            ans+=p.second;
        }
        return ans;
    }
};